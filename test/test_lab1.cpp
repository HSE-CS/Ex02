#include "task1.h"
#include "gtest/gtest.h"

TEST(task1, TestOne) {
    ASSERT_DOUBLE_EQ(calc(2.0), 1.414214);
}