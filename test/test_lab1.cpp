#include "task1.h"
#include "gtest/gtest.h"


TEST(task1, test1) {
	ASSERT_EQ(3.0, average(4.0, 2.0));
}

TEST(task1, test2) {
	ASSERT_EQ(4.1, average(2.8, 5.4));
}

TEST(task1, test3) {
	ASSERT_EQ(4.9, average(9.1, 0.7));
}

TEST(task1, test4) {
	ASSERT_EQ(4.3, average(5.0, 3.6));
}



TEST(task1, test5) {
	ASSERT_EQ(2.5, improve(2.0, 6.0));
}

TEST(task1, test6) {
	ASSERT_EQ(4.2, improve(4.4, 17.6));
}




TEST(task1, test7) {
	ASSERT_EQ(true, good(2.0,4.0 ))
}

TEST(task1, test8) {
	ASSERT_EQ(false, good(3.7, 2.9))
}




TEST(task1, test9) {
	ASSERT_EQ(2.0, iter(2.0, 4.0))
}

TEST(task1, test10) {
	ASSERT_EQ(1.0, iter(1.0, 1.0))
}




TEST(task1, test9) {
	ASSERT_EQ(, calc(, ))
}

TEST(task1, test10) {
	ASSERT_EQ(, calc(, ))
}
*/