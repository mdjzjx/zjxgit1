#include <iostream>
#include "gtest/gtest.h"
#include "func.h"
#include <stdio.h>

TEST(AdditionTest,twoValues)
{
	EXPECT_EQ(3,func(1, 2));
}




