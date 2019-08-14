
cmake_minimum_required(VERSION 3.7)

project(Example1)

add_executable(hello_world main.cpp)

set_target_properties(
    hello_world PROPERTIES
    CXX_STANDART 11
    CXX_STANDART_REQUIRED ON
)
