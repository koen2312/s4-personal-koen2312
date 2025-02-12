cmake_minimum_required(VERSION 3.10)
project(dockertest)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 20)

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    add_compile_definitions(ENABLE_LOGGING)
endif()

add_executable(dockertest src/main.cpp)

target_include_directories(dockertest PRIVATE ${CMAKE_SOURCE_DIR}/include)