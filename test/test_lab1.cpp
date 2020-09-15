#include "task1.h"

#include "gtest/gtest.h"



TEST(task1, test1)
{
ASSERT_NEAR(3.16227766, calc(10), 0.0000001);
}

TEST(task1, test2)
{
ASSERT_NEAR(2.82842712, calc(8), 0.0000001);
}

TEST(task1, test3)
{
ASSERT_NEAR(1.416667, improve(1.5, 2.0), 0.000001);
}

TEST(task1, test4)
{
ASSERT_NEAR(1.414216, improve(1.4167, 2.0), 0.000001);
}

TEST(task1, test5)
{
ASSERT_EQ(false, good(1, 2));
}

TEST(task1, test6)
{

ASSERT_TRUE(good(0.000003, 0.00000000000005));
}
TEST(task1, test7)
{
ASSERT_DOUBLE_EQ(2.0, average(2, 2));
}
TEST(task1, test8)
{
ASSERT_DOUBLE_EQ(3.0, average(3, 3));
}
TEST(task1, test9)
{
ASSERT_DOUBLE_EQ(4.0, average(4, 4));
}
TEST(task1, test10)
{
ASSERT_EQ(false, good(1, 2));
}