#include "task1.h"

#include "gtest/gtest.h"

TEST(task1, test1)
{
    ASSERT_NEAR(35.4657365372,average(20.5448909956, 50.775649985764566), 0.00001);

}

TEST(task1, test2)
{
     ASSERT_NEAR(16.288743784993,average(10.5448909956, 22.775649985764566), 0.00001);
	
}





