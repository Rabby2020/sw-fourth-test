#include <iostream>
#include <memory>
#include <string>


class Window {
public:
    virtual std::string render() const = 0;
    virtual ~Window() = default;
};

class Scrollbar {
public:
    virtual std::string render() const = 0;
    virtual ~Scrollbar() = default;
};

class WindowsWindow : public Window {
    public:
        std::string render() const override {
            return "Rendering Windows Window";
        }
    };
    
    class WindowsScrollbar : public Scrollbar {
    public:
        std::string render() const override {
            return "Rendering Windows Scrollbar";
        }
    };
    