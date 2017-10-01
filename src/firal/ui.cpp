#include <firal/ui.h>

FIRAL_NAMESPACE_BEGIN

UI::UI() : nanogui::Screen() {
    currentScene = nullptr;
}

UI::UI(int w, int h) : nanogui::Screen(Vec2i(w, h), "Firal Engine") {
    currentScene = nullptr;
}

UI::UI(int w, int h, std::string title) : nanogui::Screen(Vec2i(w, h), title) {
    currentScene = nullptr;
}

UI::UI(Vec2i size) : nanogui::Screen(size, "Firal Engine") {
    currentScene = nullptr;
}

UI::UI(Vec2i size, std::string title) : nanogui::Screen(size, title) {
    currentScene = nullptr;
}

UI::~UI() {
    if (currentScene) delete currentScene;
}

void UI::setCurrentScene(Scene* param) {
    currentScene = param;
}

FIRAL_NAMESPACE_END
