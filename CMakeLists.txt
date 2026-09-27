cmake_minimum_required(VERSION 3.20)
project(MiProyecto CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Busca TODOS los .cpp dentro de src/ (y sus subcarpetas)
file(GLOB_RECURSE FUENTES CONFIGURE_DEPENDS src/*.cpp)

find_package(spdlog REQUIRED)
add_executable(programa ${FUENTES})
target_link_libraries(programa PRIVATE spdlog::spdlog)

# Le dice al compilador que busque los #include "..." también en include/
target_include_directories(programa PRIVATE include)

target_compile_options(programa PRIVATE -Wall -Wextra)