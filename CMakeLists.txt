cmake_minimum_required(VERSION 3.10)


project(David LANGUAGES CXX)


add_executable(David)
set_property(TARGET David PROPERTY CXX_STANDARD 20)

find_package(SDL2)

if (NOT SDL2_FOUND)
    message(STATUS "SDL2 not found on system, downloading...")
    include (FetchContent)
    FetchContent_Declare(
        SDL2
        GIT_REPOSITORY "https://github.com/libsdl-org/SDL/"
        GIT_TAG release-2.0.18
    )
    FetchContent_MakeAvailable(SDL2)
endif()

set(DAVID_SOURCES
    src/main.cpp
)

set(DAVID_HEADERS
    src/core/david.h
)

target_sources(David PRIVATE ${DAVID_SOURCES})
target_link_libraries(David PRIVATE SDL2-static SDL2main)