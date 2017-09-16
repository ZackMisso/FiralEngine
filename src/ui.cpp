#include <firal/ui.h>

FIRAL_NAMESPACE_BEGIN

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

void UI::drawAll() {
    // empty for now
}

void UI::drawContents() {
    // empty for now
}

void UI::dropEvent() {
    // empty for now
}

bool UI::keyboardEvent(int key, int scancode, int action, int modifiers) {
    // empty for now
    return false;
}

bool UI::keyboardCharacterEvent(unsigned int codepoint) {
    // empty for now
    return false;
}

bool UI::resizeEvent(const Vec2i& size) {
    // empty for now
    return false;
}

FIRAL_NAMESPACE_END
