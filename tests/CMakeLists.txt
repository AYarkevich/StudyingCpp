
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(Studying_Tests LevelOneTests.cpp)
target_link_libraries(Studying_Tests gtest_main LevelOne gtest_main)

add_test(Studying_gTests Studying_Tests)