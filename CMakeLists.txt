cmake_minimum_required(VERSION 3.16)
project(ExerciseSessionCICD)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.11.0.zip
)
FetchContent_MakeAvailable(googletest)

enable_testing()

# Source file della main app
add_executable(ExerciseSession src/main.cpp src/problems.cpp)

# Source files dei test
add_executable(tests tests/tests.cpp src/problems.cpp)
target_link_libraries(tests gtest_main)
include(GoogleTest)
gtest_discover_tests(tests)

