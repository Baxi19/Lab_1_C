cmake_minimum_required(VERSION 3.15)
project(Lab_1_C C)

set(CMAKE_C_STANDARD 99)

ADD_LIBRARY(regex STATIC IMPORTED)
SET_TARGET_PROPERTIES(regex PROPERTIES IMPORTED_LOCATION C:/msys64/mingw64/lib/libsystre.dll.a)


add_executable(Lab_1_C main.c)
target_link_libraries(Lab_1_C regex)