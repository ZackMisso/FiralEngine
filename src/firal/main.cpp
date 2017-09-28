#include <firal/bitmap.h>
#include <firal/debugui.h>

int main(int argc, char* args[])
{
    std::cout << "Firal Engine Initializing" << std::endl;
    std::cout << "Rendering Offline Test Image" << std::endl;

    // render gray scale image
    unsigned char *data = new unsigned char[256*3];
    for (int i=0;i<16;i++) {
        for (int j=0;j<16;j++) {
            data[i*16*3+j*3] = i*16+j;
            data[i*16*3+j*3+1] = i*16+j;
            data[i*16*3+j*3+2] = i*16+j;
        }
    }
    firal::writeBMP("test.bmp", 16, 16, data);
    delete[] data;

    // DebugUI* debugui = new DebugUI(500, 500);
    // Scene* scene = new Scene();
    //
    // // do stuffs here
    //
    // delete scene;
    // delete debugui;

    return 0;
}
