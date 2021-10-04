cmake_minimum_required(VERSION 3.1)

project(3)


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1x -Wall -Wextra")
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


find_package(Boost 1.54.0 COMPONENTS system REQUIRED)
include_directories(${Boost_INCLUDE_DIR})


add_executable(1 1.cpp)
add_executable(2 2.cpp)
target_link_libraries(2 ${Boost_LIBRARIES})

