cmake_minimum_required(VERSION 3.19)
project(struct_project C)

set(CMAKE_C_STANDARD 99)

add_executable(struct_project main.c struct.c)