#include "task1.h"

#include "gtest/gtest.h"

TEST(task1, test1)
{
    ASSERT_NEAR(1.414214, calc(2), 0.1);

}

TEST(task1, test2)
{
    ASSERT_NEAR(3.0, calc(9), 0.1);

}

TEST(task1, test3)
{
    ASSERT_NEAR(2.0, calc(4), 0.1);

}