cmake_minimum_required(VERSION 3.7)

project(LibaryCalc)

add_library(Calc STATIC Calc.cpp Calc.h)

set_target_properties(
    Calc PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)