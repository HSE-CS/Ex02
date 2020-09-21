#include "task1.h"

#include "gtest/gtest.h"


TEST(task1, test1)
{
	ASSERT_NEAR(1.414214, calc(2.0), 0.000001);

}

TEST(task1, test2)
{
	ASSERT_NEAR(1.73205, calc(3.0), 0.00001);

}

TEST(task1, test3)
{
	ASSERT_NEAR(2.236068, calc(5.0), 0.000001);

}