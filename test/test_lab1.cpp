#include "task1.h"
#include "gtest/gtest.h"
TEST(task1, test1)
{
	ASSERT_NEAR(1.414214, calc(2.0), 0.000001);
}
TEST(task1, test1){
	ASSERT_NEAR(1.732050, calc(3.0), 0.000001);
}
TEST(task1, test1) {
	ASSERT_NEAR(2.0, calc(4.0), 0.000001);
}
TEST(task1, test1) {
	ASSERT_NEAR(2.236067, calc(5.0), 0.000001);
}
TEST(task1, test1) {
	ASSERT_NEAR(2.449489, calc(6.0), 0.000001);
}
TEST(task1, test1)
{
	ASSERT_DOUBLE_EQ(2.500000, average(2.0, 3.0));
}
TEST(task1, test2)
{
	ASSERT_EQ(0.000000, good(5.0, 8.0));
}
TEST(task1, test3)
{
	ASSERT_FLOAT_EQ(4.142857, improve(7.0, 9.0));
}
TEST(task1, test7)
{
	ASSERT_FLOAT_EQ(3.000000, iter(7.0, 9.0));
}
TEST(task1, test9)
{
	ASSERT_FLOAT_EQ(1.000000, good(0.0, 0.0));
}
