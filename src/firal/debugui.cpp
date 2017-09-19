#include <firal/debugui.h>

DebugUI::DebugUI(int w, int h) : UI() {
    NOTIMP
}

DebugUI::DebugUI(int w, int h, std::string title) : UI() {
    NOTIMP
}

DebugUI::DebugUI(Vec2i size) : UI(size) {
    NOTIMP
}

DebugUI::DebugUI(Vec2i size, std::string title) : UI(size, title) {
    NOTIMP
}

DebugUI::~DebugUI() {
    NOTIMP
}

void DebugUI::drawAll() {
    NOTIMP
}

void DebugUI::drawContents() {
    NOTIMP
}

void DebugUI::dropEvent() {
    NOTIMP
}

bool DebugUI::keyboardEvent(int key, int scancode, int action, int modifiers) {
    NOTIMP
    return false;
}

bool DebugUI::keyboardCharacterEvent(unsigned int codepoint) {
    NOTIMP
    return false;
}

bool DebugUI::resizeEvent(const Vec2i& size) {
    NOTIMP
    return false;
}
