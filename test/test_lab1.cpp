#include "gtest/gtest.h"

#include "pch.h"
#include "../include/task1.h"

TEST(task1, test1) {
	ASSERT_FLOAT_EQ(1.414214, calc(2.0));
}

TEST(task1, test2) {
	ASSERT_FLOAT_EQ(10.000000, average(10.0, 10.0));
}

TEST(task1, test3) {
	ASSERT_FLOAT_EQ(2.236068, iter(5.0, 5.0));
}

TEST(task1, test4) {
	ASSERT_FLOAT_EQ(1.833333, improve(3.0, 2.0));
}

TEST(task1, test5) {
	ASSERT_FLOAT_EQ(0, good(3.0, 3.0));
}

TEST(task1, test6) {
	ASSERT_FLOAT_EQ(1.7320508, calc(3.0));
}

TEST(task1, test7) {
	ASSERT_FLOAT_EQ(2, calc(4.0));
}

TEST(task1, test8) {
	ASSERT_FLOAT_EQ(2.236068, calc(5.0));
}

TEST(task1, test9) {
	ASSERT_FLOAT_EQ(7, average(7.0, 7.0));
}
TEST(task1, test10) {
	ASSERT_FLOAT_EQ(6.5, average(8.0, 5.0));
}

