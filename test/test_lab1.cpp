#include "task1.h"
#include "gtest/gtest.h"


TEST(task1, test1)
{
    ASSERT_NEAR(4.0, calc(16.0),0.0001 );

}

TEST(task1, test2)
{
    ASSERT_NEAR(2.0, calc(4.0), 0.0001);

}

TEST(task1, test3)
{
    ASSERT_FALSE(good(10, 1));

}

TEST(task1,test4)
{
    ASSERT_NEAR(9.0, calc(81.0), 0.0001);

}

TEST(task1, test5)
{
    ASSERT_NEAR(10.0, calc(100.0), 0.0001);

}

TEST(task1, test6)
{
    ASSERT_FALSE(good(100, 2));
}

TEST(task1, test7)
{
    ASSERT_NEAR(7.21110, calc(52.0), 0.0001);

}

TEST(task1, test8)
{
    ASSERT_NEAR(9.16515, calc(84.0), 0.0001);

}

TEST(task1, test9)
{
    ASSERT_NEAR(8.30662, calc(69.0), 0.0001);

}

TEST(task1, test10)
{
    ASSERT_NEAR(3.0, calc(9.0), 0.0001);

}
