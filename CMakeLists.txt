cmake_minimum_required(VERSION 3.23)
project(StudyingCpp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

enable_testing()

add_subdirectory(libs/googletest-main)
add_subdirectory(src)
add_subdirectory(tests)

