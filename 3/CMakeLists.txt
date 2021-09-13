cmake_minimum_required(VERSION 3.1)

project(3)


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1x -Wall -Wextra")
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(circle circle.cpp)
add_executable(commodity commodity.cpp)
add_executable(4 4.cpp)
