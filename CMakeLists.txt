cmake_minimum_required(VERSION 3.10)

project(David)

add_executable(David)

option(BUILD_GOGOLE_VERSION "Build gogole version" OFF)

set(DAVID_SOURCES
    src/main.cpp
    src/utils.cpp
)

set(DAVID_HEADERS
    src/core/david.h
)


if (BUILD_GOGOLE_VERSION)
    target_compile_options(David PRIVATE "-DGOGOLE_VERSION")
endif()

target_include_directories(David PRIVATE src/core)
target_sources(David PRIVATE ${DAVID_SOURCES})
target_sources(David PRIVATE ${DAVID_HEADERS})