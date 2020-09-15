#include "task1.h"

#include "gtest/gtest.h"

TEST(task1, test_average)
{

ASSERT_DOUBLE_EQ(10.0, average(5.0, 15.0));

}

TEST(task1, test_good)
{
ASSERT_DOUBLE_EQ(0, good(25.0, 5.0));

}

TEST(task1, test_improve)
{

ASSERT_DOUBLE_EQ(4.66667,improve(9.0, 3.0));

}

TEST(task1, test_iter)
{

ASSERT_DOUBLE_EQ(2, iter(16.0, 4.0));

}

TEST(task1, test_average_2)
{

ASSERT_DOUBLE_EQ(6, average(5.0, 7.0));

}

TEST(task1, test6)
{

ASSERT_NEAR(1.73205, calc(3), 0.0001);

}
TEST(task1, test7)
{

ASSERT_NEAR(1.41421, calc(2), 0.0001);

}

TEST(task1, test8)
{

ASSERT_NEAR(2.23606,calc(5), 0.0001);

}

TEST(task1, test9)
{

ASSERT_NEAR(6.0,calc(36.0), 0.0001);

}

TEST(task1, test10)
{

ASSERT_NEAR(7.0,calc(49.0), 0.0001);

}



