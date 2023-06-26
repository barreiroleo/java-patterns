#pragma once

#include "../Buttons/WindowsButton.hpp"
#include "./Dialog.hpp"

class WindowsDialog : public Dialog {
  public:
    WindowsDialog() = default;
    ~WindowsDialog() override = default;

    IButton *createButton() override { return new WindowsButton(); }
};
