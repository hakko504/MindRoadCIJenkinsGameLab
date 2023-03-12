cmake_minimum_required(VERSION 3.22)

set(This GameTests)

set(Sources
    GameTest.cpp
)

add_executable(${This} ${Sources})
target_link_libraries(${This} PUBLIC
    gtest_main
    Game
)

add_test(
    NAME ${This}
    COMMAND ${This} --gtest_output="xml"
)
