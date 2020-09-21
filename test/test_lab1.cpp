#include "task1.h"

#include "gtest/gtest.h"

TEST(task1, test1)
{
    ASSERT_NEAR(4, calc(16), 0.1);

}

TEST(task1, test2)
{
    ASSERT_NEAR(2, calc(4), 0.1);

}

TEST(task1, test3)
{
    ASSERT_NEAR(3, calc(9), 0.1);

}

TEST(task1, test4)
{
    ASSERT_NEAR(4, calc(16), 0.1);

}
TEST(task1, test5)
{
    ASSERT_NEAR(5, calc(25), 0.1);

}
TEST(task1, test6)
{
    ASSERT_NEAR(6, calc(36), 0.1);

}
TEST(task1, test7)
{
    ASSERT_NEAR(40, calc(1600), 0.1);

}
TEST(task1, test8)
{
    ASSERT_NEAR(8, calc(64), 0.1);

}
TEST(task1, test9)
{
    ASSERT_NEAR(900, calc(30), 0.1);

}
TEST(task1, test10)
{
    ASSERT_NEAR(400, calc(20), 0.1);

}