cmake_minimum_required(VERSION 3.23)
project(transform)

set(CMAKE_CXX_STANDARD 20)

add_executable(transform transform.cpp rational.cpp rational.h)
