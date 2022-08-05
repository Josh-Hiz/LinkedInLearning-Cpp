cmake_minimum_required(VERSION 3.23)
project(transformingtypes)

set(CMAKE_CXX_STANDARD 20)

add_executable(transformingtypes numword-transform.cpp numword.h numword.cpp)
