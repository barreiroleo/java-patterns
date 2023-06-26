#pragma once

#include <iostream>

#include "./Button.hpp"

class HtmlButton : public IButton {
  public:
    HtmlButton() = default;
    ~HtmlButton() override = default;

    void render() override { std::cout << "[Html] Rendering" << std::endl; }
    void onClick() override { std::cout << "[Html] Clicked" << std::endl; }
};
