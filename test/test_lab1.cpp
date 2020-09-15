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


