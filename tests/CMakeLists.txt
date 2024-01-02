set(CURRENT_EXE_NAME piaht_tests)

include(FetchContent)
FetchContent_Declare(
    CppUTest
    GIT_REPOSITORY https://github.com/cpputest/cpputest.git
    GIT_TAG        master
)
# Set this to ON if you want to have the CppUTests in your project as well.
set(TESTS OFF CACHE BOOL "Switch off CppUTest Test build")
FetchContent_MakeAvailable(CppUTest)
include_directories(${CppUTest_SOURCE_DIR}/include)
set(SOURCE_FILES test_main.cpp)
add_executable(${CURRENT_EXE_NAME} ${SOURCE_FILES})
target_include_directories(${CURRENT_EXE_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/include)
target_link_libraries(${CURRENT_EXE_NAME} CppUTest CppUTestExt)