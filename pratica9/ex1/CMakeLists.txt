cmake_minimum_required(VERSION 3.5)

project(ex1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ex1 ../include/soma.h ../src/soma.cpp ../include/power.h ../src/power.cpp ../include/mdc.h ../src/mdc.cpp ../src/main.cpp)
