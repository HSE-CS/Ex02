#include "task1.h"
#include "gtest/gtest.h"

TEST(task1, test_average)
{
	ASSERT_DOUBLE_EQ(2.5, average(3.0, 2.0));
}
TEST(task1, test_average2)
{
	ASSERT_DOUBLE_EQ(3.5, average(2.0, 5.0));
}
TEST(task1, test_good)
{
	ASSERT_DOUBLE_EQ(true, good(0.000002, 0.0000000000003));
}
TEST(task1, test_good1)
{
	ASSERT_DOUBLE_EQ(false, good(3, 1));
}
