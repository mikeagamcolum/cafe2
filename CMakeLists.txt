cmake_minimum_required(VERSION 2.8)

project(Cafe)

include(gtest.cmake)

find_package(Threads)

set(CMAKE_CXX_STANDARD 17)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -Wall -Wextra -Werror -pthread")

add_executable(cafe src/main.cpp src/funcs.cpp)
add_executable(cafe-tests test/tests.cpp src/funcs.cpp)
target_link_libraries(cafe-tests ${CMAKE_THREAD_LIBS_INIT} gtest)
