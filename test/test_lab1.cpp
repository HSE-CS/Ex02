#include "task1.h"
#include "gtest/gtest.h"
TEST(task1, test1)
{
ASSERT_EQ(1.73205081,calc(3));
}

TEST(task1, test2)
{
ASSERT_EQ(3.16227766,calc(10));

}

TEST(task1, test3)
{
ASSERT_EQ(127,calc(11.26942767));
}


TEST(task1, test4)
{
ASSERT_EQ(2.50000000,average(2.0,3.0));
}

TEST(task1, test5)
{
ASSERT_EQ(false, good(2.5,1));

}

TEST(task1, test6)
{
ASSERT_EQ(false, good(2.5123,1.2));

}

TEST(task1, test7)
{
ASSERT_EQ(true, good(2.50000000,1));

}

TEST(task1, test8)
{
ASSERT_EQ(2.50000000, improve(2.0,6.0));
}

TEST(task1, test9)
{
ASSERT_EQ(16.03121954,calc(257.0));
}

TEST(task1, test10)
{
ASSERT_EQ(9.89949494, calc(98));
}

