#include "task1.h"
#include "gtest/gtest.h"

double eps = 0.00000001;

TEST(task1, test_average_01)
{
	ASSERT_NEAR(average(0.0, 0.0), 0.0, eps);
}

TEST(task1, test_average_02)
{
	ASSERT_NEAR(average(5.022, 1.43), 3.226, eps);
}
