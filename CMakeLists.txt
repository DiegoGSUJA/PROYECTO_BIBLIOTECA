cmake_minimum_required(VERSION 3.16)
project(BibliotecaDigital)

set(CMAKE_CXX_STANDARD 17)

# Incluye los archivos del directorio src
file(GLOB SOURCES "src/*.cpp")

add_executable(PROYECTO_BIBLIOTECA ${SOURCES})
