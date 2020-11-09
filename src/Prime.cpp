#include "Prime.h"
#include <iostream>
#include <cstring>

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
    int ret = 0;
    int beg = getValue();
    int end = num2.getValue();


    Prime tmp;
    for (int i = beg+1; i < end; i++) {
        tmp.setValue(i);
        if(tmp.isValid()) ret++;
    }

    return ret;

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
