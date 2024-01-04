set(CURRENT_EXE_NAME piaht_tests)

include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest
    GIT_TAG        release-1.11.0
)

FetchContent_MakeAvailable(googletest)
add_library(GTest::GTest INTERFACE IMPORTED)
target_link_libraries(GTest::GTest INTERFACE gtest_main)
add_executable(${CURRENT_EXE_NAME} test_main.cpp)
target_link_libraries(${CURRENT_EXE_NAME} PRIVATE GTest::GTest)