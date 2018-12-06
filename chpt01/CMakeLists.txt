cmake_minimum_required(VERSION 3.10)
project(duck)

add_subdirectory(Behavior)
add_subdirectory(Duck)


set(CMAKE_CXX_STANDARD 14)

include_directories(Duck)
include_directories(Behavior)

add_executable(main main.cpp)
target_link_libraries(main fly quack mallard_duck model_duck)
