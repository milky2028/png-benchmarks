cmake_minimum_required(VERSION 3.10)

project(LibPNGBenchmarks)

add_executable(LibPNGBenchmarks src/main.cpp)

# find_package(PNG REQUIRED)
#     target_link_libraries(main PRIVATE PNG::PNG)