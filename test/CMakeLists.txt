cmake_minimum_required(VERSION 3.25)

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
    COMMAND ${This}
)
