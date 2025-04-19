#include "gtest/gtest.h"
#include "../src/factory.cpp"

TEST(WindowsFactoryTest, RenderComponents) {
    WindowsFactory factory;
    auto window = factory.createWindow();
    auto scrollbar = factory.createScrollbar();

    EXPECT_EQ(window->render(), "Rendering Windows Window");
    EXPECT_EQ(scrollbar->render(), "Rendering Windows Scrollbar");
}

TEST(LinuxFactoryTest, RenderComponents) {
    LinuxFactory factory;
    auto window = factory.createWindow();
    auto scrollbar = factory.createScrollbar();

    EXPECT_EQ(window->render(), "Rendering Linux Window");
    EXPECT_EQ(scrollbar->render(), "Rendering Linux Scrollbar");
}

