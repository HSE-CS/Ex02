#include "task1.h"

#include "gtest/gtest.h"


TEST(task1, test1_calc){
ASSERT_DOUBLE_EQ(7.000000, calc(49.0));

}

TEST(task1, test2_calc){
ASSERT_DOUBLE_EQ(7.071068, calc(50.0));
}

TEST(task1, test1_average){
ASSERT_DOUBLE_EQ(40.000000, average(3.0, 77.0));
}

TEST(task1, test2_average){
ASSERT_DOUBLE_EQ(88.500000, average(100.0, 77.0));
}

TEST(task1, test1_good){
ASSERT_TRUE(good(7.07107, 50.0));
}

TEST(task1, test2_good){
ASSERT_FALSE(good(7.0, 100.0));
}

TEST(task1, test1_improve){
ASSERT_DOUBLE_EQ(39.1494, improve(77.0, 100.0));
}

TEST(task1, test2_improve){
ASSERT_DOUBLE_EQ(5.125, improve(4.0, 25.0));
}

TEST(task1, test1_iter){
ASSERT_DOUBLE_EQ(3.0, iter(3.0, 9.0));
}

TEST(task1, test2_iter){
ASSERT_DOUBLE_EQ(7.0, iter(7.0, 49.0))
}
