cmake_minimum_required(VERSION 3.23)
project(CH03)
set(CMAKE_CXX_STANDARD 20)

message(STATUS "start running cmake...")

find_package(Boost 1.79.0 COMPONENTS system filesystem REQUIRED)

if(Boost_FOUND)

    message(STATUS "Boost_INCLUDE_DIRS: ${Boost_INCLUDE_DIRS}")
    message(STATUS "Boost_LIBRARIES: ${Boost_LIBRARIES}")
    message(STATUS "Boost_VERSION: ${Boost_VERSION}")

endif()

add_executable(CH03 raii.cpp)

if(Boost_FOUND)

    target_link_libraries(CH03 ${Boost_LIBRARIES})

endif()