#pragma once

#include "../Buttons/HtmlButton.hpp"
#include "./Dialog.hpp"

class HtmlDialog : public Dialog {
  public:
    HtmlDialog() = default;
    ~HtmlDialog() override = default;

    IButton *createButton() override { return new HtmlButton(); }
};
