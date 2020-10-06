#include "task1.h"

#include "gtest/gtest.h"


TEST(task1, Test1)
{
ASSERT_NEAR(1.50000000, average(1.0,2.0),0.0000001);
}

TEST(task1, Test2)
{
ASSERT_NEAR(4.00000000, average(3.0, 5.0),0.0000001);
}

TEST(task1, Test3)
{
ASSERT_FALSE(good(2.5,1));

}

TEST(task1, Test4)
{
ASSERT_FALSE(good(2.5123,1.2));

}

TEST(task1, Test5)
{
ASSERT_TRUE(good(0.000003, 0.00000000000005));

}

TEST(task1, Test6)
{
ASSERT_NEAR(3.25000000, improve(2.0, 9.0),0.0000001);
}

TEST(task1, Test7)
{
ASSERT_NEAR(15.00000000, calc(225.0),0.0000001);
}
TEST(task1, Test8)
{
ASSERT_NEAR(9.89949494, calc(98),0.0000001);
}

TEST(task1, Test9) {
ASSERT_NEAR(10.0000000, calc(100.0),0.0000001);
}

TEST(task1, Test10)
{
ASSERT_NEAR(6.00000000, calc(36.0),0.0000001);
}

TEST(task1, Test11)
{
ASSERT_NEAR(12.00000000, calc(144.0),0.0000001);
}

