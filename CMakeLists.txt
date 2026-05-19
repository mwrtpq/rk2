cmake_minimum_required(VERSION 3.4)

project(strategy)

set(CMAKE_CXX_STANDARD 11)

add_executable(strategy
    Stratergy/main.cpp
    Stratergy/Context.cpp
    Stratergy/ConcreteStratergyA.cpp
    Stratergy/ConcreteStratergyB.cpp
)

target_include_directories(strategy PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/Stratergy
)
