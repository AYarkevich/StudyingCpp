#include <gtest/gtest.h>
#include "LevelOne/LevelOne.h"

TEST(LevelOneTests, TestCompare)
{
const auto expected = "hello world!";
const auto actual = greet();
ASSERT_EQ(expected, actual);
}