#include "task1.h"

#include "gtest/gtest.h"


TEST(task2, test1)
{
    ASSERT_NEAR(1.414214,calc(2.0),0.000001);
}

TEST(task2, test2)
{
    ASSERT_NEAR(1.732050,calc(3.0),0.000001);
}

TEST(task2, test3)
{
    ASSERT_NEAR(1.5,average(1.0,2.0),0.000001);
}

TEST(task2, test4)
{
    ASSERT_NEAR(7.5,average(5.0,10.0),0.000001);
}

TEST(task2, test5)
{
    ASSERT_NEAR(1.0,good(2.0,4.0),0.000001);
}

TEST(task2, test6)
{
    ASSERT_NEAR(0.0,good(1.0,4.0),0.000001);
}

TEST(task2, test7)
{
    ASSERT_NEAR(4.5,improve(1.0,8.0),0.000001);
}

TEST(task2, test8)
{
    ASSERT_NEAR(5.0,improve(1.0,9.0),0.000001);
}

TEST(task2, test9)
{
    ASSERT_NEAR(2.236068,iter(1.0,5.0),0.000001);
}

TEST(task2, test10)
{
    ASSERT_NEAR(4.472136,iter(10.0,20.0),0.000001);
}