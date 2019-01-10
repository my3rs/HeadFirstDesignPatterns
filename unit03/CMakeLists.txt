project(unit03)

cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(Component Decorator)
include_directories(Component Decorator)

add_executable(unit03 main.cpp Beverage.h Decorator/CondimentDecorator.h Component/Espresso.h Component/HouseBlend.h Decorator/Mocha.h Decorator/Soy.h Decorator/Whip.h Component/DarkRoast.h)