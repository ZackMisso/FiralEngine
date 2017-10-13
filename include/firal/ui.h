/*

This class is a layer of abstraction to connect to NanoGui
All different forms of views for the engine should inherit
this class

*/

#pragma once

// Engine includes
#include <firal/common.h>
#include <firal/scene.h>

// NanoGui includes
#include <nanogui/screen.h>
#include <nanogui/window.h>
#include <nanogui/slider.h>
#include <nanogui/textbox.h>
#include <nanogui/label.h>
#include <nanogui/button.h>
#include <nanogui/combobox.h>

// Misc includes
#include <string.h>

FIRAL_NAMESPACE_BEGIN

class UI : public nanogui::Screen {
public:
    // custom initialization contructors
    UI();
    UI(int w, int h);
    UI(int w, int h, std::string title);

    // nonogui default initialization constructors
    UI(Vec2i size);
    UI(Vec2i size, std::string title);
    ~UI();

    void setCurrentScene(Scene* param);

    // helpful methods for quickly making UI
    static nanogui::Window* addWindow(nanogui::Screen* screen,
                                      std::string str,
                                      nanogui::Vector2i pos,
                                      bool isVisible);

    static nanogui::Label* addLabel(nanogui::Window* window, std::string str);

    static nanogui::Button* addButton(nanogui::Window* window,
                                      std::string str,
                                      const std::function<void(void)> &cb);

    static nanogui::Button* addToggleButton(nanogui::Window* window,
                                            std::string str,
                                            bool pushed,
                                            const std::function<void(bool)> &cb);

    static nanogui::ComboBox* addComboBox(nanogui::Window* window,
                                          const std::vector<std::string> &items,
                                          const std::function<void(int)> &cb);

    static nanogui::Slider* addSlider(nanogui::Window* window,
                                      float value,
                                      const std::function<void(float)> &cb);

    static nanogui::FloatBox<float>* addFloatBox(nanogui::Window* window,
                                                 float value,
                                                 bool editable,
                                                 const std::function<void(float)> &cb);

    static nanogui::FloatBox<float>* addFloatBox(nanogui::Window* window,
                                                 float value,
                                                 float minValue,
                                                 float maxValue,
                                                 bool editable,
                                                 const std::function<void(float)> &cb);

    static nanogui::IntBox<int>* addIntBox(nanogui::Window* window,
                                           int value,
                                           bool editable,
                                           const std::function<void(int)> &cb);

    static nanogui::IntBox<int>* addIntBox(nanogui::Window* window,
                                           int value,
                                           int minValue,
                                           int maxValue,
                                           bool editable,
                                           const std::function<void(int)> &cb);

protected:
    Scene* currentScene;
    // int width;
    // int height;
};

FIRAL_NAMESPACE_END
