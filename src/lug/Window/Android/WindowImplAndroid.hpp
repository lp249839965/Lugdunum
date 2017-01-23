#pragma once

#include <lug/Window/Window.hpp>
#include <android/input.h>

namespace lug {
namespace Window {
namespace priv {

class LUG_WINDOW_API WindowImpl {
public:
    WindowImpl(Window*);
    ~WindowImpl() = default;

    bool init(const Window::InitInfo& initInfo);
    void close();
    bool pollEvent(lug::Window::Event& event);

    LUG_WINDOW_API static std::queue<lug::Window::Event> events;
    LUG_WINDOW_API static AInputQueue *inputQueue;
};

} // namespace priv
} // namespace Window
} // namespace lug
