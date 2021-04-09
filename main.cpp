#include "include\Prime.h"
#include <iostream>
#include <cstring>
#include <cmath>

int main()
{
    Prime num1,num2;
    num1.setValue(2);
    //std::cout << num1.getValue() << ", exp = 2\n";
    num2=num1.nextPrime();          // в num2 устанавливается 3
    //std::cout << num2.getValue() << ", exp = 3 \n";
    bool result=num1.checkPrime(17); // true
    //std::cout << result << ", exp = 1 \n";
    num2.setValue(17);              // в num2 устанавливаем 17
    //std::cout << num2.getValue() << ", exp = 17\n";
    int count=num2.countBetween(num1); // count=5
    //std::cout << count << ", exp = 5 \n";
    bool ans=num2.isValid();        // true
    //std::cout << ans << ", exp = 1";

}


//w

/*
int main()
{
    Prime num1,num2;
    num1.setValue(3);
    std::cout << num1.getValue() << " - ";
    num2.setValue(13);
    std::cout << num2.getValue() << '\n';
    int result=num1.countBetween(num2);
    std::cout << result;
    //EXPECT_EQ(3,result);
}
*/


//w

/*
int main()
{
    Prime num1,num2;
    num1.setValue(11);
    std::cout << num1.getValue() << " - ";
    num2.setValue(13);
    std::cout << num2.getValue() << '\n';
    int result=num1.countBetween(num2);
    std::cout << result;
    //EXPECT_EQ(0,result);
}
*/
