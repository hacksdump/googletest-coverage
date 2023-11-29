cmake_minimum_required(VERSION 3.16)
project(gtest_coverage)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_CXX_FLAGS --coverage)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        main
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

set(SOURCE_FILES src/testsubject.cpp)
add_executable(main main.cpp ${SOURCE_FILES})

set(TEST_FILES test/tester.cpp)
add_executable(test ${TEST_FILES} ${SOURCE_FILES})

target_link_libraries(test gtest gtest_main)
