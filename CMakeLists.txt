cmake_minimum_required(VERSION 3.25)
project(class_10 C)

set(CMAKE_C_STANDARD 11)

add_executable(class_10 main.c libs/utils.h algorithms/askForAge.h algorithms/calculateDetranResources.h)
