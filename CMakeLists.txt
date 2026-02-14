cmake_minimum_required(VERSION 4.0.2)

project(TestInclude)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_COMPILE_OBJECT "chcp 65001 >nul && ${CMAKE_CXX_COMPILE_OBJECT}")
set(CMAKE_C_COMPILE_OBJECT "chcp 65001 >nul && ${CMAKE_C_COMPILE_OBJECT}")

file(GLOB_RECURSE headerFiles LIST_DIRECTORIES false "${CMAKE_CURRENT_SOURCE_DIR}/src/*.h")
file(GLOB_RECURSE sourceFiles LIST_DIRECTORIES false "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")

add_library(TestInclude STATIC)

target_sources(TestInclude
        PRIVATE ${sourceFiles}
        PRIVATE FILE_SET HEADERS
        BASE_DIRS ${CMAKE_CURRENT_SOURCE_DIR}/src
        FILES ${headerFiles}
)
