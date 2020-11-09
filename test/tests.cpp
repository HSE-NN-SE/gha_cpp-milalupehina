#include "gtest/gtest.h"
#include "Prime.h"
#include <cstring>

// task1
TEST(ex06,test1)
{
	Prime num;
	num.setValue(2);
	int result=num.getValue();
	EXPECT_EQ(2,result);
}
TEST(ex06,test2)
{
	Prime num;
	num.setValue(21);
	bool result=num.isValid();
	EXPECT_EQ(false,result);
}
TEST(ex06,test3)
{
	Prime num;
	num.setValue(193);
	bool result=num.isValid();
	EXPECT_EQ(true,result);
}
TEST(ex06,test4)
{
	Prime num1,num2;
	num1.setValue(193);
	num2=num1.nextPrime();
	int result=num2.getValue();
	EXPECT_EQ(197,result);
}
TEST(ex06,test5)
{
	Prime num1,num2;
	num1.setValue(3)
	num2.setValue(13)
	int result=num1.countBetween(num2);
	EXPECT_EQ(3,result);
}
TEST(ex06,test6)
{
	Prime num1,num2;
	num1.setValue(11);
	num2.setValue(13);
	int result=num1.countBetween(num2);
	EXPECT_EQ(0,result);
}
TEST(ex06,test7)
{
	Prime num;
	bool result=num.checkPrime(18);
	EXPECT_EQ(false,result);
}
TEST(ex06,test8)
{
	Prime num;
	bool result=num.checkPrime(149);
	EXPECT_EQ(true,result);
}
