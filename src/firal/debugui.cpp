#include <firal/debugui.h>

FIRAL_NAMESPACE_BEGIN

DebugUI::DebugUI(int w, int h) : UI(w, h) {
    initializeGUI();
    std::cout << "Finished Creating DebugUI" << std::endl;
}

DebugUI::DebugUI(int w, int h, std::string title) : UI(w, h, title) {
    initializeGUI();
    std::cout << "Finished Creating DebugUI" << std::endl;
}

DebugUI::DebugUI(Vec2i size) : UI(size) {
    initializeGUI();
    std::cout << "Finished Creating DebugUI" << std::endl;
}

DebugUI::DebugUI(Vec2i size, std::string title) : UI(size, title) {
    initializeGUI();
    std::cout << "Finished Creating DebugUI" << std::endl;
}

DebugUI::~DebugUI() {
    // currently does nothing
}

void DebugUI::initializeGUI() {
    // add stuff later
    performLayout();
}

void DebugUI::draw(NVGcontext* ctx) {
    /* Draw the user interface */
    Screen::draw(ctx);
}

void DebugUI::drawContents() {
    // TODO
    // NOTIMP
}

void DebugUI::dropEvent() {
    std::cout << "Drop Events currently not supported" << std::endl;
}

bool DebugUI::keyboardEvent(int key, int scancode, int action, int modifiers) {
    std::cout << "Keyboard Events urrently not supported" << std::endl;
    return false;
}

bool DebugUI::keyboardCharacterEvent(unsigned int codepoint) {
    std::cout << "Keyboard Character Events urrently not supported" << std::endl;
    return false;
}

bool DebugUI::resizeEvent(const Vec2i& size) {
    std::cout << "Resize Event currently not supported" << std::endl;
    return false;
}

FIRAL_NAMESPACE_END
