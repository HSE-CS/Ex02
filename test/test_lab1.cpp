#include "task1.h"
#include "gtest/gtest.h"

TEST(task1, TestOne) {
	ASSERT_DOUBLE_EQ(calc(2.0), 1.414214);
}

TEST(task1, TestTwo) {
	ASSERT_DOUBLE_EQ(calc(4.0), 2.0);
}

TEST(task1, TestThree) {
	ASSERT_DOUBLE_EQ(calc(4.0), 2.0);
}

TEST(task1, TestFour) {
	ASSERT_DOUBLE_EQ(calc(4.0), 2.0);
}

TEST(task1, TestFive) {
	ASSERT_DOUBLE_EQ(calc(4.0), 2.0);
}

TEST(task1, TestSix) {
	ASSERT_DOUBLE_EQ(calc(4.0), 2.0);
}

TEST(task1, TestSeven) {
	ASSERT_DOUBLE_EQ(calc(4.0), 2.0);
}

TEST(task1, TestEight) {
	ASSERT_DOUBLE_EQ(calc(4.0), 2.0);
}

TEST(task1, TestNine) {
	ASSERT_EQ(good(3.1415926777, 3.1415926771), true);
}

TEST(task1, TestTen) {
	ASSERT_EQ(good(3.1415926, 3.1415929), false);
}