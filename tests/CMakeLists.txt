cmake_minimum_required(VERSION 3.14)

project(piaht_gtest)

include(FetchContent)

FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest
        GIT_TAG v1.14.0)

FetchContent_GetProperties(googletest)

if (NOT googletest_POPULATED)
        FetchContent_Populate(googletest)
        add_subdirectory(${googletest_SOURCE_DIR} ${CMAKE_BINARY_DIR}/googletest-build)
endif()

include_directories(../include ../src)

add_executable(piaht_gtest properties_calculator_test.cpp)
target_link_libraries(piaht_gtest gtest_main gmock_main) 