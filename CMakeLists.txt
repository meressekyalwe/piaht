cmake_minimum_required(VERSION 3.22)
project(piaht VERSION 0.1)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

include_directories(${CMAKE_SOURCE_DIR}/include)

enable_testing()
include(CTest)

add_subdirectory(src)
add_subdirectory(tests)

option(BUILD_WITH_DOCS "Generate Docs" ON)
if(TASKSCH_BUILD_WITH_DOCS)
	add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/docs)
endif()