#include "task1.h"

#include "gtest/gtest.h"

TEST(task1, test1)
{
    ASSERT_EQ(2.00,getPrime(4));

}

TEST(task1, test2)
{
     ASSERT_EQ(1.00,getPrime(1));
	
}

TEST(task1, test3)
{
     ASSERT_EQ(3.00,getPrime(9));
	
}
