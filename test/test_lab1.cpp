#include "../include/task1.h"
#include "gtest/gtest.h"

TEST (SquareRootTest, PositiveNos) {
    ASSERT_NEAR (average(5,5), 5.0, 0.1);
    ASSERT_NEAR (average(6,5), 5.5, 0.1);
}

