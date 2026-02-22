cmake_minimum_required(VERSION 4.1)
project(untitled C)

set(CMAKE_C_STANDARD 11)

add_executable(untitled char-count.c
        newline-counter.c
        wc.c
        count.c
        functions.c
        count-line.c
        detab.c
        range.c
        strcat.c
        bitwise.c
        grep.c
        pointers.c
        address-arithimethic.c
        strlen.c
        char-pointers.c
)
