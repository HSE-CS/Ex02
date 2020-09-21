#include "task1.h"
#include "gtest/gtest.h"


TEST(task1, test1)
{
	ASSERT_FLOAT_EQ(1.414214, calc(2.0));

}


TEST(task1, test2)
{
	ASSERT_FLOAT_EQ(2.000000, calc(4.0));

}

TEST(task1, test3)
{
	ASSERT_FLOAT_EQ(3.162277, calc(10.0));

}

TEST(task1, average1)
{
	ASSERT_FLOAT_EQ(2.500000, average(2.0, 3.0));

}

TEST(task1, average2)
{
	ASSERT_FLOAT_EQ(6.500000, average(10.0, 3.0));

}

TEST(task1, good1)
{
	ASSERT_BOOL_EQ(0.099999, good(0.00001, 0.1));

}



