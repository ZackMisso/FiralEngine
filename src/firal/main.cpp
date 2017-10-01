#include <firal/bitmap.h>
#include <firal/debugui.h>
#include <test/trianglescene.h>

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

    std::cout << "Creating Triangle Scene" << std::endl;
    firal::TriangleScene* scene = new firal::TriangleScene();

    std::cout << "Creating Debug UI" << std::endl;
    // firal::DebugUI* debugui = new firal::DebugUI(500, 500);
    // debugui->setCurrentScene(scene);

    try {
        nanogui::init();
        {
            nanogui::ref<firal::DebugUI> app = new firal::DebugUI(500, 500);
            app->setCurrentScene(scene);
            app->drawAll();
            app->setVisible(true);
            nanogui::mainloop();
        }
        nanogui::shutdown();
    } catch (const std::runtime_error &e) {
        std::string error_msg = std::string("Caught a fatal error: ") + std::string(e.what());
        std::cerr << error_msg << std::endl;
        return -1;
    }

    std::cout << "Cleaning Up Allocated Memory" << std::endl;
    // delete debugui;
    // if (scene) delete scene;

    return 0;
}
