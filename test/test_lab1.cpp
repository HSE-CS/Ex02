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
	
	ASSERT_NEAR(4.58257569, calc(21.0), 0.000001);
}
