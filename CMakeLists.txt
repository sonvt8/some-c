cmake_minimum_required(VERSION 3.14)
project(ApTech C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(run1 30-days/day08.c)
add_executable(run2 30-days/luyen-ve-ham.c)
add_executable(run3 30-days/luyen-struct.c)
add_executable(run4 30-days/luyen-struct-2.c)
add_executable(run5 30-days/luyen-file/doc-file.c)
add_executable(run6 30-days/luyen-file/doc-file-2.c)
add_executable(run7 30-days/luyen-file/ghi-file.c)
add_executable(run8 30-days/mang-2-chieu/mang-2-chieu.c)

add_executable(r0 hackerrank-language-c/00.hello.c)
add_executable(r1 hackerrank-language-c/01.play-char.c)
add_executable(r2 hackerrank-language-c/02.sum-diff.c)
add_executable(r3 hackerrank-language-c/03.max-4.c)
add_executable(r4 hackerrank-language-c/04.wth-pointer.c)
add_executable(r4b hackerrank-language-c/04b.swap.c)
add_executable(r4c hackerrank-language-c/04c.kobiet.c)
add_executable(raa hackerrank-language-c/aa.c)

