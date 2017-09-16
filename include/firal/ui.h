/*

This class is a layer of abstraction to connect to NanoGui
All different forms of views for the engine should inherit
this class

*/

#pragma once

// Engine includes
#include <firal/common.h>

// NanoGui includes
#include <nanogui/screen.h>

// Misc includes
#include <string.h>

FIRAL_NAMESPACE_BEGIN

class UI : public nanogui::Screen {
public:
    // custom initialization contructors
    UI(int w, int h);
    UI(int w, int h, std::string title);

    // nonogui default initialization constructors
    UI(Vec2i size);
    UI(Vec2i size, std::string title);
    ~UI();

    // screen methods
    virtual void drawAll();
    virtual void drawContents();
    virtual void dropEvent();
    virtual bool keyboardEvent(int key, int scancode, int action, int modifiers);
    virtual bool keyboardCharacterEvent(unsigned int codepoint);
    virtual bool resizeEvent(const Vec2i& size);

private:
    // int width;
    // int height;
};

FIRAL_NAMESPACE_END
