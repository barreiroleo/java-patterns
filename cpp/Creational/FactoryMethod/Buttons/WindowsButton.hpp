#pragma once

#include <iostream>

#include "./Button.hpp"

class WindowsButton : public IButton {
  public:
    WindowsButton() = default;
    ~WindowsButton() override = default;

    void render() override { std::cout << "[Windows] Rendering" << std::endl; }
    void onClick() override { std::cout << "[Windows] Clicked" << std::endl; }
};
