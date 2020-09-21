#include "task1.h"


#include "gtest/gtest.h"

//TEST(task1,test1) {
 //   ASSERT_DOUBLE_EQ(2.0, average(2.0, 2.0));
//}


TEST(task1, test1)
{
    ASSERT_NEAR(1.414214, calc(2.0), 0.000001);

}

