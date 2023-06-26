#pragma once

class IButton {
  public:
    virtual ~IButton() = 0;
    virtual void render() = 0;
    virtual void onClick() = 0;
};
