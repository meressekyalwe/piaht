cmake_minimum_required(VERSION 3.13)

project(piaht_gtest)

include_directories(../include ../src)

add_executable(piaht_gtest test_main.cpp)



include(FetchContent)

FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest
        GIT_TAG  release-1.11.0)

FetchContent_GetProperties(googletest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

if(CMAKE_SYSTEM_NAME STREQUAL "Linux")
if (NOT googletest_POPULATED)
        FetchContent_Populate(googletest)
        add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BINARY_DIR})
        include_directories(${gtest_SOURCE_DIR}/include ${gmock_SOURCE_DIR}/include)
endif()

target_link_libraries(piaht_gtest gtest gtest_main) 
endif()

if(CMAKE_SYSTEM_NAME STREQUAL "Windows")
#set(gtest_disable_pthreads on) #needed in MinGW

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)

target_link_libraries(piaht_gtest PRIVATE gtest_main)

include(GoogleTest)

gtest_discover_tests(GoogleTest)

endif()


