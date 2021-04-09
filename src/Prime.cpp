#include "header\Prime.h"
#include <iostream>
#include <cstring>
#include <cmath>

//** - установить число
void Prime::setValue(int ch)
{
    num = ch;
    //std::cout << num;
}

//** - проверка, действительно ли установленное число простое
bool Prime::isValid()
{
    if (num > 2) {
        for (int i = 2; i <= sqrt(num); i++)
            if (num % i == 0)
                return false;
        return true;
    }
    else{
        if (num == 1 || num == 2 ) return true;
        else return false;
    }
}

//** - проверка переданного числа на простоту
bool Prime::checkPrime(int n)
{
    //std::cout << n << '\n';
    if (n > 2) {
        for (int i = 2; i <= sqrt(n); i++)
            if (n % i == 0)
                return false;
        return true;
    }
    else{
        if (n == 1 || n == 2 ) return true;
        else return false;
    }
}

//** - подсчет количества простых чисел между установленным и переданным
int Prime::countBetween(Prime& num2)
{
    int ret1 = 0;
    int ret2 = 0;
    int beg = getValue();//17
    int end = num2.getValue();//2



    if(beg < end)
    {
        Prime tmp1;
        for (int i = beg+1; i < end; i++) {
            tmp1.setValue(i);
            if(tmp1.isValid()) ret1++;
        }
        return ret1;
    }
    else
    {
        Prime tmp2;
        for (int i = beg-1; i > end; i--) {
            tmp2.setValue(i);
            if(tmp2.isValid()) ret2++;
        }
        return ret2;
    }
}

//** -  возвращение простого числа, расположенного следом за установленным
Prime Prime::nextPrime()
{
    Prime tmp;
    for(int i = num+1; i < num*num; i++ )
    {
        tmp.setValue(i);
        if(tmp.isValid()) return tmp;
    }
}

//** - возвращение установленного числа.
int Prime::getValue()
{
    return num;
}
