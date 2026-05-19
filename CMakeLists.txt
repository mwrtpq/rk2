cmake_minimum_required(VERSION 3.4)
project(strategy)
set(CMAKE_CXX_STANDARD 11)

enable_testing()

add_library(strategy_lib
    Stratergy/Context.cpp
    Stratergy/ConcreteStratergyA.cpp
    Stratergy/ConcreteStratergyB.cpp
)

target_include_directories(strategy_lib PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/Stratergy
)

add_executable(strategy
    Stratergy/main.cpp
)
target_link_libraries(strategy
    strategy_lib
)

add_subdirectory(third-party/gtest)

add_executable(check
    tests/strategy_test.cpp
)
target_link_libraries(check
    strategy_lib
    gtest_main
)

add_test(NAME check COMMAND check)
