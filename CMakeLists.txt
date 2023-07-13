cmake_minimum_required(VERSION 3.12)

project(Quack2DAll C CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")

add_subdirectory(quack2d)
add_subdirectory(test_game)