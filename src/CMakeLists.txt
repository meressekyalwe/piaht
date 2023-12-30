include_directories(${CMAKE_SOURCE_DIR}/include)

file(GLOB_RECURSE ENGINE_HEADERS *.hpp *.h *.inl)
file(GLOB_RECURSE ENGINE_SOURCES *.cpp *.c)

add_executable(${PROJECT_NAME} ${ENGINE_SOURCES} ${ENGINE_HEADERS})