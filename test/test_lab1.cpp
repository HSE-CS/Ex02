#include "task1.h"

#include "gtest/gtest.h"

TEST(task1, Test1)
{
EXPECT_DOUBLE_EQ(1.5, average(1,2),0.0000001);
}
TEST(task1, Test2)
{
EXPECT_DOUBLE_EQ(4, average(3, 5),0.0000001);
}
TEST(task1, Test3)
{
ASSERT_TRUE (good(5.55, 30.8025));
}
TEST(task1, Test4)
{
ASSERT_TRUE (good(85.365, 7287.183225));
}
TEST(task1, Test5)
{
ASSERT_EQ(114.706, improve(228, 322),0.0000001);
}
TEST(task1, Test6)
{
ASSERT_NEAR(0.0009765625, calc(0),0.0000001);
}
TEST(task1, Test7)
{
ASSERT_NEAR(5.0000000000537224, calc(25),0.0000001);
}
TEST(task1, Test8) {
ASSERT_NEAR(7.07107, calc(50),0.0000001);
}
TEST(task1, Test9)
{
ASSERT_NEAR(15.0997, calc(228),0.0000001);
}
TEST(task1, Test10)
{
ASSERT_NEAR(17.9444, calc(322),0.0000001);
}

