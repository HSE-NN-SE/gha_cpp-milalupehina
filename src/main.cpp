#include "Prime.h"
#include <iostream>
#include <cstring>

#define master

#ifdef master
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
#endif

//w
#ifdef t1
// task1
int main()
{
    Prime num;
    num.setValue(2);
    std::cout << num.getValue();

    //int result=num.getValue();
    //EXPECT_EQ(2,result);
}
#endif

//w
#ifdef t2
int main()
{
    Prime num;

    num.setValue(21);
    std::cout << num.getValue() << '\n';

    bool result=num.isValid();
    std::cout << result;
    //EXPECT_EQ(false,result);
}
#endif

//w
#ifdef t3
int main()
{
    Prime num;

    num.setValue(193);
    std::cout << num.getValue() << '\n';

    bool result=num.isValid();
    std::cout << result;
    //EXPECT_EQ(true,result);
}
#endif

//w
#ifdef t4
int main()
{
    Prime num1,num2;

    num1.setValue(193);
    std::cout << num1.getValue() << '\n';

    num2=num1.nextPrime();

    int result=num2.getValue();
    std::cout << result;
    //EXPECT_EQ(197,result);
}
#endif

//w
#ifdef t5
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
#endif

//w
#ifdef t6
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
#endif

//w
#ifdef t7
int main()
{
    Prime num;

    bool result=num.checkPrime(18);

    std::cout << result;
    //EXPECT_EQ(false,result);
}
#endif

#ifdef t8
int main()
{
    Prime num;

    bool result=num.checkPrime(149);

    std::cout << result;
    //EXPECT_EQ(true,result);
}
#endif

