cmake_minimum_required(VERSION 3.10)
project(The_legendary_pink_dot)

add_executable(The_legendary_pink_dot main.c joystick.c)

add_executable(Tests test.cpp joystick.c)
target_link_libraries(Tests gtest gtest_main pthread)
