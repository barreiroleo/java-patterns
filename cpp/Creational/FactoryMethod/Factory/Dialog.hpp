#pragma once

#include "../Buttons/Button.hpp"

class Dialog {
  public:
    Dialog() = default;
    virtual ~Dialog() = 0;

    void renderWindow()
    {
        IButton *button = createButton();
        button->render();
    }

    virtual IButton *createButton() = 0;
};
