#include "task1.h"

#include "gtest/gtest.h"

TEST(task1, test1)
{
ASSERT_NEAR(1.414214,calc(2.0), 0.000001);

}

TEST(task1, test2)
{
ASSERT_NEAR(2.236068,calc(5.0), 0.000001);

}

TEST(task1, test3)
{
ASSERT_NEAR(15.099669,calc(228.0), 0.000001);

}

TEST(task1, test4)
{
ASSERT_NEAR(445.248245,calc(198246.0), 0.000001);

}

TEST(task1, test5)
{
ASSERT_NEAR(14.071247,calc(198.0), 0.000001);

}

TEST(task1, test6)
{
ASSERT_NEAR(11.532563,calc(133.0), 0.000001);

}

TEST(task1, test7)
{
ASSERT_NEAR(15.099669,calc(228.0), 0.000001);

}

TEST(task1, test8)
{
ASSERT_NEAR(115.706525,calc(13388.0), 0.000001);

}

TEST(task1, test9)
{
ASSERT_NEAR(25.258662,calc(638.0), 0.000001);

}

TEST(task1, test10)
{
ASSERT_NEAR(7.937254,calc(63.0), 0.000001);

}

TEST(task2, test11)
{
ASSERT_NEAR(1.414214,calc(2.0),0.000001);
}

TEST(task2, test12)
{
ASSERT_NEAR(1.414214,calc(2.0),0.000001);
}

TEST(task2, test13)
{
ASSERT_NEAR(3.0,average(2.0,4.0),0.000001);
}

TEST(task2, test14)
{
ASSERT_NEAR(1.5,average(0.0,3.0),0.000001);
}

TEST(task2, test15)
{
ASSERT_NEAR(1.0,good(2.0,4.0),0.000001);
}

TEST(task2, test16)
{
ASSERT_NEAR(0.0,good(1.0,4.0),0.000001);
}

TEST(task2, test17)
{
ASSERT_NEAR(3.0,improve(1.0,5.0),0.000001);
}

TEST(task2, test18)
{
ASSERT_NEAR(2.5,improve(1.0,4.0),0.000001);
}

TEST(task2, test19)
{
ASSERT_NEAR(2.236068,iter(1.0,5.0),0.000001);
}

TEST(task2, test20)
{
ASSERT_NEAR(4.472136,iter(10.0,20.0),0.000001);
}