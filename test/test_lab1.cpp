#include "task1.h"

#include "gtest/gtest.h"

TEST(task1, test1) {
	ASSERT_NEAR(1.416667, calc(2.0), 100);
}
