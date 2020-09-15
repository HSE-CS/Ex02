#include "task1.h"
#include "gtest/gtest.h"

TEST(task1, test1)
{
	
	ASSERT_NEAR(1.4142135, calc(2.0), 0.000001);
}

TEST(task1, test2)
{
	
	ASSERT_NEAR(5.0, calc(25.0), 0.000001);
}

TEST(task1, test3)
{
	
	ASSERT_NEAR(7.416198, calc(55.0), 0.000001);
}
TEST(task1, test4) {
	ASSERT_NEAR(6.5, average(4, 9), 0.00000001);
}

TEST(task1, test5) {
	ASSERT_NEAR(6.0, average(7, 5), 0.00000001);
}

TEST(task1, test6)
{
	ASSERT_TRUE(good(1.0, 1.0));
}
TEST(task1, tes7)
{
	ASSERT_DOUBLE_EQ(1.414214, iter(4.0, 2.0));

}

TEST(task1, test8)
{
	ASSERT_NEAR(0.000069, iter(9.0, 0.0), 0.000001);

}
TEST(task1, test9) {
	ASSERT_NEAR(3.300000, improve(5.0, 8.0), 0.000001);
}
TEST(task1, test10) {
	ASSERT_NEAR(3.571429, improve(7.0, 1.0), 0.000001);
}
