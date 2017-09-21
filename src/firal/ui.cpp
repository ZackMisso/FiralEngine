#include <firal/ui.h>

FIRAL_NAMESPACE_BEGIN

UI::UI() : nanogui::Screen() {
    NOTIMP
}

UI::UI(int w, int h) : nanogui::Screen() {
    NOTIMP
}

UI::UI(int w, int h, std::string title) : nanogui::Screen() {
    NOTIMP
}

UI::UI(Vec2i size) : nanogui::Screen(size, "Firal Engine Test") {
    NOTIMP
}

UI::UI(Vec2i size, std::string title) : nanogui::Screen(size, title) {
    NOTIMP
}

UI::~UI() {
    // empty for now
}

FIRAL_NAMESPACE_END
