cmake_minimum_required(VERSION 3.19)
project(ncurses_test)

set(CMAKE_CXX_STANDARD 14)

add_executable(ncurses_test main.cpp)
target_link_libraries(ncurses_test curses menu)
