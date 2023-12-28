cmake_minimum_required(VERSION 3.14)
project(piaht VERSION 0.1)
set(CMAKE_CXX_STANDARD 14)


add_subdirectory(src)
add_subdirectory(tests)

OPTION(BUILD_WITH_DOCS "Generate Docs" ON)
IF(TASKSCH_BUILD_WITH_DOCS)
	ADD_SUBDIRECTORY(${CMAKE_CURRENT_SOURCE_DIR}/docs)
ENDIF()