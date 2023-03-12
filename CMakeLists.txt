cmake_minimum_required(VERSION 3.22) 

set(This Game)

project(${This} C CXX)
set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

enable_testing()

add_subdirectory(googletest)

set(Headers
    GameLogic.hpp
)

set(Sources
    Game.cpp
    GameLogic.cpp
    )

add_executable(${This} STATIC ${Sources} ${Headers})

add_subdirectory(test)
