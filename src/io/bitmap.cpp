#include "bitmap.h"

BMP_BITMAPFILEHEADER bmfh;
BMP_BITMAPINFOHEADER bmih;

unsigned char* readBMP(const char* fileName,int& width,int& height) {
	FILE* file;
	BMP_DWORD pos;

	if(!(file=fopen(fileName,"rb"))) return 0x0;

	// read the file header
	fread(&(bmfh.bfType),2,1,file);
	fread(&(bmfh.bfSize),4,1,file);
	fread(&(bmfh.bfReserved1),2,1,file);
	fread(&(bmfh.bfReserved2),2,1,file);
	fread(&(bmfh.bfOffBits),4,1,file);

	pos = bmfh.bfOffBits;

	// read the info header
	fread(&bmih,sizeof(BMP_BITMAPINFOHEADER),1,file);

	// errer checking
	if(bmfh.bfType != 0x4d42) return 0x0;

	fseek(file,pos,SEEK_SET);
	width = bmih.biWidth;
	height = bmih.biHeight;

	int padWidth = width*3;
	int pad = 0;
	if(padWidth % 4 != 0) {
		pad = 4 - (padWidth % 4);
		padWidth += pad;
	}
	int bytes = height*padWidth;

	unsigned char* data = new unsigned char[bytes];

	int tmp = fread(data,bytes,1,file);

	if(!tmp) {
		delete[] data;
		return 0x0;
	}

	fclose(file);

	// shuffle bitmat so it is rgb tuples in row-major-order
	unsigned char* in;
	unsigned char* out;

	in = data;
	out = data;

	for(int j=0;j<height;j++) {
		for(int i=0;i<width;i++) {
			unsigned char tmp2 = in[2];
			out[1] = in[1];
			out[2] = in[0];
			out[0] = tmp2;
			in+=3;
			out+=3;
		}
		in+=pad;
	}

	return data;
}

void writeBMP(const char* fileName,int width,int height,unsigned char* data) {
	int bytes = width * 3;
	int pad = (bytes%4) ? 4-(bytes%4) : 0;
	bytes+=pad;
	bytes*=height;

	bmfh.bfType = 0x4d42;
	bmfh.bfSize = sizeof(BMP_BITMAPFILEHEADER) + sizeof(BMP_BITMAPINFOHEADER) + bytes;
	bmfh.bfReserved1 = 0;
	bmfh.bfReserved2 = 0;
	bmfh.bfOffBits = 14 + sizeof(BMP_BITMAPINFOHEADER);

	bmih.biSize = sizeof(BMP_BITMAPINFOHEADER);
	bmih.biWidth = width;
	bmih.biHeight = height;
	bmih.biPlanes = 1;
	bmih.biBitCount = 24;
	bmih.biCompression = BMP_BI_RGB;
	bmih.biSizeImage = 0;
	bmih.biXPelsPerMeter = (int)(100 / 2.54 * 72);
	bmih.biYPelsPerMeter = (int)(100 / 2.54 * 72);
	bmih.biClrUsed = 0;
	bmih.biClrImportant = 0;

	FILE* file = fopen(fileName,"wb");

	fwrite(&(bmfh.bfType),2,1,file);
	fwrite(&(bmfh.bfSize),4,1,file);
	fwrite(&(bmfh.bfReserved1),2,1,file);
	fwrite(&(bmfh.bfReserved2),2,1,file);
	fwrite(&(bmfh.bfOffBits),4,1,file);

	fwrite(&bmih,sizeof(BMP_BITMAPINFOHEADER),1,file);

	bytes /= height;
	unsigned char* scanline = new unsigned char[bytes];
	for(int j=0;j<height;j++) {
		memcpy(scanline,data+j*3*width,bytes);
		for(int i=0;i<width;i++) {
			unsigned char temp = scanline[i*3];
			scanline[i*3] = scanline[i*3+2];
			scanline[i*3+2] = temp;
		}
		fwrite(scanline,bytes,1,file);
	}

	delete[] scanline;
	fclose(file);
}
