cmake_minimum_required(VERSION 3.6)
project(gda-spring-2017)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/spec.cpp)
add_executable(gda-spring-2017 ${SOURCE_FILES})