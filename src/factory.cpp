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


class LinuxWindow : public Window {
public:
    std::string render() const override {
        return "Rendering Linux Window";
    }
};

class LinuxScrollbar : public Scrollbar {
public:
    std::string render() const override {
        return "Rendering Linux Scrollbar";
    }
};


class GUIFactory {
public:
    virtual std::unique_ptr<Window> createWindow() const = 0;
    virtual std::unique_ptr<Scrollbar> createScrollbar() const = 0;
    virtual ~GUIFactory() = default;
};


class WindowsFactory : public GUIFactory {
public:
    std::unique_ptr<Window> createWindow() const override {
        return std::make_unique<WindowsWindow>();
    }
    std::unique_ptr<Scrollbar> createScrollbar() const override {
        return std::make_unique<WindowsScrollbar>();
    }
};


class LinuxFactory : public GUIFactory {
public:
    std::unique_ptr<Window> createWindow() const override {
        return std::make_unique<LinuxWindow>();
    }
    std::unique_ptr<Scrollbar> createScrollbar() const override {
        return std::make_unique<LinuxScrollbar>();
    }
};
