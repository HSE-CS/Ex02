#include "task1.h"
#include "gtest/gtest.h"

TEST(task1, test_average)
{
	ASSERT_DOUBLE_EQ(2.5, average(3.0, 2.0));
}
