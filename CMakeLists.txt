cmake_minimum_required(VERSION 3.20)  

set(game_name "tetris")

project(${game_name} LANGUAGES C)  

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_executable(${game_name} src/main.c)


add_subdirectory(vendor/raylib)
target_link_libraries(${game_name} PRIVATE raylib)

add_subdirectory(vendor/raygui)
terget_link_linkraries(${game_name} PRIVATE raygui)