cmake_minimum_required(VERSION 3.28)
project(test1 C)

set(CMAKE_C_STANDARD 11)

add_executable(test1 main.c
        Header/main.h
        fonction.c)
