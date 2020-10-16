#include "task1.h"
#include "gtest/gtest.h"

TEST(average, test1){
ASSERT_DOUBLE_EQ(45.0,average(60.0,30.0));
}

TEST(average, test2){
ASSERT_DOUBLE_EQ(65.118,average(121.43,8.806));
}

TEST(good, test1){
ASSERT_TRUE(good(5.0,25.000000000001));
}

TEST(good, test2){
ASSERT_FALSE(good(3.7,13.02347));
}

TEST(improve, test1){
ASSERT_DOUBLE_EQ(15.2575,improve(30.0,15.45));
}

TEST(improve, test2){
ASSERT_DOUBLE_EQ(3.0, improve(1.0, 5.0));
}

TEST(iter, test1){
ASSERT_DOUBLE_EQ(7.79, iter(7.79, 60.6841));
}

TEST(iter, test2){
ASSERT_NEAR(1.58114,iter(11.0,2.5),0.000001);
}

TEST(calc, test1){
ASSERT_NEAR(29.273964541892891,calc(856.965),0.000001);
}

TEST(calc, test2){
ASSERT_NEAR(1.58113883, calc(2.5), 0.00000001);
}