cmake_minimum_required(VERSION 3.10)

project(Template)

set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_custom_target(check)

add_subdirectory(source)
add_subdirectory(vendor)

