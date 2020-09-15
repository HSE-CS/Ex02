#include "gtest/gtest.h"
#include "task1.h"

TEST(task1, test_for_4){
    ASSERT_NEAR(2.0, calc(4.0), 0.00001);
}

TEST(task1, test_for_9){
    ASSERT_NEAR(3.0, calc(9.0), 0.00001);
}

TEST(task1, test_for_81){
    ASSERT_NEAR(9.0, calc(81.0), 0.00001);
}

TEST(task1, test_for_1){
    ASSERT_NEAR(1.0, calc(1.0), 0.00001);
}

TEST(task1, test_for_3){
    ASSERT_NEAR(1.732051, calc(2.0), 0.0001);
}

TEST(task1, test_for_5){
    ASSERT_NEAR(2.236068, calc(5.0), 0.00001);
}

TEST(task1, test_for_289){
    ASSERT_NEAR(17.0, calc(289.0), 0.00001);
}

TEST(task1, test_for_100){
    ASSERT_NEAR(10.0, calc(100.0), 0.00001);
}

TEST(task1, test_for_05){
    ASSERT_NEAR(0.707107, calc(0.5), 0.00001);
}

TEST(task1, test_for_12){
    ASSERT_NEAR(3.464102, calc(12.0), 0.00001);
}
