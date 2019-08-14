
cmake_minimum_required(VERSION 3.7)

project(Example2)

set(SOURCES main.cpp Calc.cpp)

set(HEADERS Calc.h)

add_executable(CALCULATOR ${SOURCES} ${HEADERS})

set_target_properties(
    CALCULATOR PROPERTIES
    CXX_STANDART 11
    CXX_STANDART_REQUIRED ON
)