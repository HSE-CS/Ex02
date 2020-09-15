#include "task1.h"
#include "gtest/gtest.h"

TEST(task1, test_average_1)
{
	ASSERT_DOUBLE_EQ(1.5, average(2.0, 1.0));

}
TEST(task1, test_average_2)
{
	ASSERT_DOUBLE_EQ(3.0, average(2.0, 4.0));

}
