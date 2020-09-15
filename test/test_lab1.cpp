#include "task1.h"
#include "gtest/gtest.h"

TEST(task1, _average_1) {
	ASSERT_DOUBLE_EQ(63.5, average(52.0, 75.0));
}

TEST(task1, _average_2){
	ASSERT_DOUBLE_EQ(115.31, average(145.3, 85.32));
}

TEST(task1, _good_1) {
	ASSERT_EQ(0, good(432.32, 15.23));
}

TEST(task1, _good_2) {
	ASSERT_EQ(1,good(sqrt(50.0), 50.0));
}

TEST(task1, _improve_1) {
	ASSERT_DOUBLE_EQ(13.262947524333473, improve(23.63, 68.43));
}

TEST(task1, _improve_2) {
	ASSERT_DOUBLE_EQ(61.625143633855394, improve(123.23, 2.5));
}

TEST(task1, _iter_1) {
	ASSERT_DOUBLE_EQ(7.0, iter(7.0, 49.0));
}

TEST(task1, _iter_2) {
	ASSERT_DOUBLE_EQ(6.9282032302755088, iter(7.0, 48.0));
}

TEST(task1, _calc_1) {
	ASSERT_DOUBLE_EQ(9.0000000000070912, calc(81.0));
}

TEST(task1, _calc_2) {
	ASSERT_DOUBLE_EQ(12, calc(144.0));
}






