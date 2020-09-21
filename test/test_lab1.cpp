#include "task1.h"

#include "gtest/gtest.h"

TEST(task1, test1)
{
    ASSERT_NEAR(2.5,average(2.0, 3.0),0.00000001);

}

TEST(task1, test2)
{
     ASSERT_NEAR(true,good(1.0, 1.0),0.00000001);

}

TEST(task1, test3)
{
     ASSERT_NEAR(1.0,improve(1.0, 1.0),0.00000001);

}

TEST(task1, test4)
{
    ASSERT_NEAR(1.41421,calc(2.0),0.00000001);
}
