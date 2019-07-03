cmake_minimum_required(VERSION 3.14)
project(ApTech C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(run1 day08.c)
add_executable(run2 luyen-ve-ham.c)
add_executable(run3 luyen-struct.c)
add_executable(run4 luyen-struct-2.c)
add_executable(run5 luyen-file/doc-file.c)
add_executable(run6 luyen-file/doc-file-2.c)
add_executable(run7 luyen-file/ghi-file.c)
add_executable(run8 mang-2-chieu/mang-2-chieu.c)
