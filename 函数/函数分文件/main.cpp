#include <iostream>
using namespace std;
#include "swap.h"
#include "swap.cpp"//也要倒入cpp！！

int main()
{
    int a = 100;
    int b = 200;
    swap(a, b);

    return 0;
}