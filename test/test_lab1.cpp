#include "task1.h"
#include "gtest/gtest.h"


TEST(task1, test1)
{
ASSERT_DOUBLE_EQ(1.0, calc(1.0));
}

TEST(task1, test2)
{
ASSERT_DOUBLE_EQ(10,calc(100));
}

TEST(task1, test3)
{
ASSERT_DOUBLE_EQ(3.0,calc(9.0));
}

TEST(task1, test4)
{
ASSERT_DOUBLE_EQ(4.0,calc(16.0));
}

TEST(task1, test5)
{
ASSERT_DOUBLE_EQ(5.0,calc(25.0));
}

TEST(task1, test6)
{
ASSERT_NEAR(1.6666666,calc(3), 0.0000001);
}
TEST(task1, test7)
{
ASSERT_NEAR(1.3223223,calc(2), 0.0000001);
}

TEST(task1, test8)
{
ASSERT_NEAR(2.7898789,calc(8), 0.0000001);
}

TEST(task1, test9)
{
ASSERT_TRUE(good(2,4));
}

TEST(task1, test10)
{
ASSERT_FALSE(good(17, 256));
}