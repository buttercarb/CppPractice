#include <iostream>
using namespace std;

// int main()
// {

// int a = 10;
// int &b = a;

// cout << "a = " << a << endl;
// cout << "b = " << b << endl;

// b = 999;
// cout << "a = " << a << endl;
// cout << "b = " << b << endl;
// return 0;
// }

// int main()
// {
//     int a =10;
//     int &b = a;

//     int c = 20;

//     b = c;//give value

//     cout << "a = " << a << endl;
//     cout << "b = " << b << endl;
//     cout << "c = " << c << endl;


//     return 0;
// }

// void mySwap01(int a, int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// void mySwap02(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// void mySwap03(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }


// int main()
// {
//     int a = 10;
//     int b = 20;

//     mySwap01(a, b);
//     cout << "a: " << a << " b: " << b << endl;

//     mySwap02(&a, &b);
//     cout << "a: " << a << " b: " << b << endl;

//     mySwap03(a, b);
//     cout << "a: " << a << " b: " << b << endl;


//     return 0;
// }

// int &test01()
// {
//     int a = 10;
//     return a;
// }

// int &test02()
// {
//     static int a = 20;
//     return a;
// }

// int main()
// {
//     int &ref = test01();
//     cout << "ref = " << ref << endl; 
//     cout << "ref = " << ref << endl;

//     int &ref2 = test02();
//     cout << "ref2 = " << ref2 << endl; 
//     cout << "ref2 = " << ref2 << endl;

//     test02() = 1000;
//     cout << "ref2 = " << ref2 << endl; 
//     cout << "ref2 = " << ref2 << endl; 

//     return 0;
// }

// void func(int &ref)
// {
//     ref = 100;
// }

// int main()
// {
//     int a = 10;
//     int &ref = a;
//     ref = 20;
//     cout << "a = " << a << endl;
//     cout << "ref = " << ref << endl;
//     func(a);
//     cout << "a = " << a << endl;
//     cout << "ref = " << ref << endl;

//     return 0;
// }

void showValue(const int &v)
{
    //v = 100;
    cout << v << endl;
}

int main()
{
    const int &ref = 10;
    cout << ref << endl;

    int a = 10;
    showValue(a);

    return 0;

}