#include "task1.h"
#include "gtest\gtest.h"

TEST(task1, test1) {
	ASSERT_EQ(512.00000, calc(1024));
}

TEST(task1, test2) {
	ASSERT_EQ(2.00000, calc(4));
}

TEST(task1, test3) {
	ASSERT_EQ(4.00000, calc(16));
}