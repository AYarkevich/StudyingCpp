add_subdirectory(LevelOne)

add_executable(StudyingCpp main.cpp)
target_link_libraries(StudyingCpp LevelOne)