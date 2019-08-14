
cmake_minimum_required(VERSION 3.7)

project(MainCalc)

add_executable(MainCalc main.cpp)

set_target_properties(
    MainCalc PROPERTIES
    CXX_STANDART 11
    CXX_STANDART_REQUIRED ON
)

target_include_directories(
    MainCalc
    PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/../lib
)

target_link_libraries(MainCalc Calc)
