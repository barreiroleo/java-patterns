#include <string>

#include "Factory/Dialog.hpp"
#include "Factory/HtmlDialog.hpp"
#include "Factory/WindowsDialog.hpp"

enum OS_NAME { WIN32, APPLE, LINUX, FreeBSD, WEB, UNKNOWN };

static OS_NAME getOsName()
{
#ifdef _WIN32
    return OS_NAME::WIN32;
#elif __APPLE__
    return OS_NAME::APPLE;
#elif __linux__
    return OS_NAME::LINUX;
#elif __FreeBSD__
    return OS_NAME::FreeBSD;
#else
    return OS_NAME::UNKNOWN;
#endif
}

class Demo {
  public:
    Demo() = default;
    ~Demo() { delete dialog; }

    static void Configure(Demo *demo);
    static void runBusinessLogic(Demo *demo);

  private:
    Dialog *dialog;
};

void Demo::Configure(Demo *demo)
{
    Dialog *dialog = nullptr;
    switch (getOsName()) {
        case OS_NAME::WIN32:
            demo->dialog = new WindowsDialog{};
            break;
        case OS_NAME::WEB:
            demo->dialog = new HtmlDialog{};
            break;
        default:
            throw "No Dialog available for OS";
            break;
    }
}

void Demo::runBusinessLogic(Demo *demo)
{
    demo->dialog->renderWindow();
}

int main(int argc, char *argv[])
{
    Demo demo{};
    Demo::Configure(&demo);
    Demo::runBusinessLogic(&demo);
    return 0;
}
