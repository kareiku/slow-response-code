cmake_minimum_required(VERSION 3.10)

project(SlowResponseCode VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(SlowResponseCode src/main.cpp)

install(TARGETS SlowResponseCode DESTINATION bin)