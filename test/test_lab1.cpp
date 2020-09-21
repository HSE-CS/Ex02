#include "task1.h"

#include "gtest/gtest.h"

TEST(task1, test1)
{
    ASSERT_NEAR(1.414214, calc(2), 0.01);

}

TEST(task1, test2)
{
    ASSERT_NEAR(3.0, calc(9), 0.01);

}

TEST(task1, test3)
{
    ASSERT_NEAR(2.0, calc(4), 0.01);

}

TEST(task1, test4)
{
    ASSERT_NEAR(5.0, average(0.0, 10.0), 0.001);
}
TEST(task1, test5)
{
    ASSERT_NEAR(3.75, average(3.5, 4.0), 0.001);
}
TEST(task1, test6)
{
    ASSERT_NEAR(10, calc(100), 0.001);
}
TEST(task1, test7)
{
    ASSERT_NEAR(1.73205080757, calc(3), 0.001);
}
TEST(task1, test8)
{
    ASSERT_NEAR(2.2360679775, calc(5), 0.001);
}