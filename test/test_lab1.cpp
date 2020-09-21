#include "task1.h"

#include "gtest/gtest.h"

TEST1(my, t1)
{
	ASSERT_FLOAT_EQ(3.0, average(2,4));
}
TEST2(my2,t2)
{
	ASSERT_FLOAT_EQ(12.5, average(10.0,15.0));
}
TEST3(my3, t3)
{
	ASSERT_FLOAT_EQ(5.0, average(10.0, 15.0));
}
TEST4(my4, t4)
{
	ASSERT_FLOAT_EQ(6.0, improve(10.0, 20.0));
}
TEST5(my5, t5)
{
	ASSERT_FLOAT_EQ(3.0, improve(5.0, 5.0));
}
TEST6(my6, t6)
{
	ASSERT_FLOAT_EQ(4.5, improve(7.0, 14.0));
}
TEST7(my7, t7)
{
	ASSERT_FLOAT_EQ(15.0, average(5.0, 25.0));
}
TEST8(my8, t8)
{
	ASSERT_FLOAT_EQ(100.0, average(150.0, 50.0));
}
TEST9(my9, t9)
{
	ASSERT_FLOAT_EQ(2.5, average(1.0, 4.0));
}
TEST10(my10, t10)
{
	ASSERT_FLOAT_EQ(7.0, average(10.0,4.0));
}