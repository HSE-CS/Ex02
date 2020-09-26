#include "pch.h"
#include "task1.h"

TEST(CalcTest, Test1) {
	EXPECT_DOUBLE_EQ(1.4142135623746899, calc(2));
}
TEST(CalcTest, Test2) 
{
	EXPECT_DOUBLE_EQ(1.7320508100147274, calc(3));
}
TEST(CalcTest, Test3) 
{
	ASSERT_EXIT(calc(-1),::testing::ExitedWithCode(1),"");
}
TEST(AverageTest, Test4)
{
	EXPECT_DOUBLE_EQ(1, average(1,1));
}
TEST(AverageTest, Test5)
{
	EXPECT_DOUBLE_EQ(1.5, average(1, 2));
}
TEST(GoodTest, Test6) 
{
	ASSERT_EQ(false,good(1.1,1.0));
}
TEST(GoodTest, Test7) 
{
	ASSERT_EQ(false, good(1, 1.1));
}
TEST(ImproveTest, Test8)
{
	EXPECT_DOUBLE_EQ(1.5, improve(1, 2));
}
TEST(CalcTest, Test9) 
{
	EXPECT_DOUBLE_EQ(0.0009765625, calc(0));
}
TEST(CalcTest, Test10)
{
	EXPECT_DOUBLE_EQ(5.0000000000537224, calc(25));
}


int main(int argc, char *argv[])
{
	
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}