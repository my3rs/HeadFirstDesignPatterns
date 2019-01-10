include_directories(../Behavior)

add_library(mallard_duck SHARED MallardDuck.cpp Duck.cpp)
target_link_libraries(mallard_duck fly quack)

add_library(model_duck SHARED ModelDuck.cpp Duck.cpp)
target_link_libraries(model_duck fly quack)

