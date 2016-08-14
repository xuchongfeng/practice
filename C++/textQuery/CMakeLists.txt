cmake_minimum_required(VERSION 3.5)
project(textQuery)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp TextQuery.h TextQuery.cpp QueryResult.h QueryResult.cpp)
add_executable(textQuery ${SOURCE_FILES})