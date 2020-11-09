#include "gtest/gtest.h"
#include "Prime.h"
#include <cstring>

// task1
TEST(ex06,test1)
{
	Prime num;
	num.setValue(2)
	int result=num.getValue();
	EXPECT_EQ(2,result);
}