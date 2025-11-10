cmake_minimum_required(VERSION 3.10)
project(ccall_example LANGUAGES CXX VERSION 1.0)

find_package(Eigen3)
find_package(BLAS)

add_library(ccall SHARED ccall.cpp)
add_executable(ccall_ex ccall.cpp)

target_link_libraries(ccall Eigen3::Eigen blas)
target_link_libraries(ccall_ex Eigen3::Eigen blas)

set(CMAKE_CXX_FLAGS "-Wall -Wextra -march=native")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")