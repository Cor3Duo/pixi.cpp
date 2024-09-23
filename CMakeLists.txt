cmake_minimum_required(VERSION 3.29)
project(pixi_cpp)

set(CMAKE_CXX_STANDARD 20)
set(GLFW_DIR "C:/GLFW")
include_directories(${GLFW_DIR}/include)

#link_directories(${GLFW_DIR}/lib-mingw-w64)
link_directories(${GLFW_DIR}/lib-vc2022)

add_executable(pixi_cpp main.cpp
        pixi/Point.cpp
        pixi/Point.h)

target_link_libraries(pixi_cpp glfw3.lib opengl32.lib user32.lib gdi32.lib shell32.lib)