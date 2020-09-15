#include "gtest/gtest.h"
#include "task1.h"

TEST(task1, test_for_4){
    ASSERT_EQ(2.0, calc(4.0))
}

TEST(task1, test_for_9){
    ASSERT_EQ(3.0, calc(9.0))
}

TEST(task1, test_for_81){
    ASSERT_EQ(9.0, calc(81.0))
}


