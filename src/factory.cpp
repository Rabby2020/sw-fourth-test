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