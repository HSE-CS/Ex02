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

TEST(task1, test3)
{

ASSERT_DOUBLE_EQ(3.0,calc(9.0));

}

TEST(task1, test3)
{

ASSERT_DOUBLE_EQ(1.0,calc(1.0));

}

TEST(task1, test3)
{

ASSERT_NEAR(1.73205,calc(3), 0.0001);

}
TEST(task1, test3)
{

ASSERT_NEAR(1.41421,calc(2), 0.0001);

}

TEST(task1, test3)
{

ASSERT_NEAR(2.23606,calc(5), 0.0001);

}

TEST(task1, test3)
{

ASSERT_NEAR(6.0,calc(36.0), 0.0001);

}

TEST(task1, test3)
{

ASSERT_NEAR(7.0,calc(49.0), 0.0001);

}



