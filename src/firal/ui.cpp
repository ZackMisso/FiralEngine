#include <firal/ui.h>
#include <nanogui/layout.h>

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

////
//  Helpful static methods
////

nanogui::Window* UI::addWindow(nanogui::Screen* screen,
                               std::string str,
                               nanogui::Vector2i pos,
                               bool isVisible)
{
    nanogui::Window* window = new nanogui::Window(screen, str);
    window->setPosition(pos);
    window->setLayout(new nanogui::GroupLayout());
    window->setVisible(isVisible);
    return window;
}

nanogui::Label* UI::addLabel(nanogui::Window* window, std::string str)
{
    nanogui::Label* label = new nanogui::Label(window, str, "sans-bold");
    return label;
}

nanogui::Button* UI::addButton(nanogui::Window* window,
                               std::string str,
                               const std::function<void(void)> &cb)
{
    nanogui::Button* button = new nanogui::Button(window, str);
    button->setCallback(cb);
    return button;
}

nanogui::Button* UI::addToggleButton(nanogui::Window* window,
                                     std::string str,
                                     bool pushed,
                                     const std::function<void(bool)> &cb)
{
    nanogui::Button* button = new nanogui::Button(window, str);
    button->setFlags(nanogui::Button::ToggleButton);
    button->setChangeCallback(cb);
    button->setPushed(pushed);
    return button;
}

nanogui::ComboBox* UI::addComboBox(nanogui::Window* window,
                                   const std::vector<std::string> &items,
                                   const std::function<void(int)> &cb)
{
    nanogui::ComboBox* combo = new nanogui::ComboBox(window, items);
    combo->setCallback(cb);
    return combo;
}

nanogui::Slider* UI::addSlider(nanogui::Window* window,
                               float value,
                               const std::function<void(float)> &cb)
{
    nanogui::Slider* slider = new nanogui::Slider(window);
    slider->setValue(value);
    slider->setCallback(cb);
    return slider;
}

nanogui::FloatBox<float>* UI::addFloatBox(nanogui::Window* window,
                                          float value,
                                          bool editable,
                                          const std::function<void(float)> &cb)
{
    nanogui::FloatBox<float>* box = new nanogui::FloatBox<float>(window);
    box->setValue(value);
    box->setEditable(editable);
    box->setCallback(cb);
    return box;
}

nanogui::FloatBox<float>* UI::addFloatBox(nanogui::Window* window,
                                          float value,
                                          float minValue,
                                          float maxValue,
                                          bool editable,
                                          const std::function<void(float)> &cb)
{
    nanogui::FloatBox<float>* box = new nanogui::FloatBox<float>(window);
    box->setValue(value);
    box->setMinValue(minValue);
    box->setMaxValue(maxValue);
    box->setEditable(editable);
    box->setCallback(cb);
    return box;
}

nanogui::IntBox<int>* UI::addIntBox(nanogui::Window* window,
                                    int value,
                                    bool editable,
                                    const std::function<void(int)> &cb)
{
    nanogui::IntBox<int>* box = new nanogui::IntBox<int>(window);
    box->setValue(value);
    box->setEditable(editable);
    box->setCallback(cb);
    return box;
}

nanogui::IntBox<int>* UI::addIntBox(nanogui::Window* window,
                                    int value,
                                    int minValue,
                                    int maxValue,
                                    bool editable,
                                    const std::function<void(int)> &cb)
{
    nanogui::IntBox<int>* box = new nanogui::IntBox<int>(window);
    box->setValue(value);
    box->setMinValue(minValue);
    box->setMaxValue(maxValue);
    box->setEditable(editable);
    box->setCallback(cb);
    return box;
}


FIRAL_NAMESPACE_END
