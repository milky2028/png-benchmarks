cmake_minimum_required(VERSION 3.10)

project(LibPNGBenchmarks)

add_executable(LibPNGBenchmarks src/main.cpp)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# find_package(PNG REQUIRED)
# target_link_libraries(main PRIVATE PNG::PNG)