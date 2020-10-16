#include "task1.h"
#include "gtest/gtest.h"
TEST(task1, test1)
{
	ASSERT_NEAR(1.414214, calc(2.0), 0.000001);

}
TEST(task1, test2)
{
	ASSERT_NEAR(2.000000, calc(4.0), 0.000001);

}
TEST(task1, test3)
{
	ASSERT_NEAR(1.732051, calc(3.0), 0.000001);

}
TEST(task1, test4)
{
	ASSERT_NEAR(2.236068, calc(5.0), 0.000001);

}
TEST(task1, test5)
{
	ASSERT_NEAR(1.414214, calc(2.0), 0.000001);

}
TEST(task1, test6)
{
	ASSERT_NEAR(1.414214, calc(2.0), 0.000001);
	//ASSERT_FLOAT_EQ(3.000000, iter(7.0, 9.0));

}
TEST(task1, test7)
{
	ASSERT_NEAR(1.414214, calc(2.0), 0.000001);

}
TEST(task1, test8)
{
	ASSERT_FLOAT_EQ(3.000000, iter(7.0, 9.0));
	//ASSERT_FLOAT_EQ(1.000000, good(3.0, 3.0));

}
TEST(task1, test9)
{
	ASSERT_EQ(4.5, improve(9.0, 0.0));

}
TEST(task1, test10)
{
	ASSERT_EQ(0.0, average(-1.0, 1.0));

}
