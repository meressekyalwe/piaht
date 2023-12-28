cmake_minimum_required(VERSION 3.14)

project(GoogleTest)

include(FetchContent)

FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)

file(GLOB_RECURSE ENGINE_SOURCES *.cpp *.c)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

include_directories(../include ../src)

#set(gtest_disable_pthreads on) #needed in MinGW

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(GoogleTest ${ENGINE_SOURCES})

target_link_libraries(GoogleTest PRIVATE gtest_main)

include(GoogleTest)

gtest_discover_tests(GoogleTest)