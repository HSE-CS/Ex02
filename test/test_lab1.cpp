#include "task1.h"

#include "gtest/gtest.h"

TEST(task1, test1)
{
    ASSERT_EQ(50, calc(2500));

}

TEST(task1, test2)
{
    ASSERT_EQ(2, calc(4));

}

TEST(task1, test3)
{
    ASSERT_EQ(3, calc(9));
}