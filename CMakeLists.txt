cmake_minimum_required(VERSION 4.2)
project(CLowLevel C)

set(CMAKE_C_STANDARD 23)

add_executable(CLowLevel main.c
        func.h
        arraysC.h
)
