#include <gtest/gtest.h>
#include "LevelOne/LevelOne.h"

TEST(LevelOneTests, TestCompare)
{
const auto expected = "hello world!";
const auto actual = greet();
ASSERT_EQ(expected, actual);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}