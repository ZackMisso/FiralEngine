#pragma once

#include <firal/ui.h>

FIRAL_NAMESPACE_BEGIN

class DebugUI : public UI {
    // custom initialization contructors
    DebugUI(int w, int h);
    DebugUI(int w, int h, std::string title);

    // nonogui default initialization constructors
    DebugUI(Vec2i size);
    DebugUI(Vec2i size, std::string title);
    ~DebugUI();

    // screen methods
    virtual void drawAll();
    virtual void drawContents();
    virtual void dropEvent();
    virtual bool keyboardEvent(int key, int scancode, int action, int modifiers);
    virtual bool keyboardCharacterEvent(unsigned int codepoint);
    virtual bool resizeEvent(const Vec2i& size);
};

FIRAL_NAMESPACE_END
