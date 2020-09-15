#include "task1.h"

#include "gtest/gtest.h"

TEST(task1, test_average)
{

ASSERT_DOUBLE_EQ(2.00, calc(4.0));

}

TEST(task1, test2)
{
ASSERT_DOUBLE_EQ(4.0,calc(16.0));

}

TEST(task1, test3)
{
ASSERT_DOUBLE_EQ(5.0,calc(25.0));

}

