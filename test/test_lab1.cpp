#include "../include/task1.h"
#include "gtest/gtest.h"

TEST (SquareRootTest, PositiveNos) {
    ASSERT_DOUBLE_EQ (5.0, average(5,5));
    ASSERT_DOUBLE_EQ (5.5, average(6,5));
}

