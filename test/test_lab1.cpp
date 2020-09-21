#include "task1.h"


#include "gtest/gtest.h"


TEST(task1, test1)
{
ASSERT_NEAR(1.414214, calc(2.0), 0.000001)
ASSERT_NEAR(3.162, calc(10.0), 0.001);
ASSERT_NEAR(4.472135, calc(20.0), 0.000001);
ASSERT_NEAR(5.477225, calc(30.0), 0.000001);
ASSERT_NEAR(6.32, calc(40.0), 0.01);
ASSERT_NEAR(7.07, calc(50.0), 0.01);
ASSERT_NEAR(7.7, calc(60.0), 0.1);
ASSERT_NEAR(8.3666, calc(70.0), 0.0001);
ASSERT_NEAR(8.944, calc(80.0), 0.001);
ASSERT_NEAR(9.48683, calc(90.0), 0.00001);

}



