cmake_minimum_required(VERSION 3.1)

project(3)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra -Wno-unused-parameter")

add_executable(1 1.cpp)
add_executable(dog dog.cpp 2.cpp animal.cpp cat.cpp)
