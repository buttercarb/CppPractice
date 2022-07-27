#include <iostream>
using namespace std;

// //global
// int g_a = 10;
// int g_b = 20;

// //全局常量
// const int c_g_a = 10;
// const int c_g_b = 10;

// int main()
// {
//     //local
//     int a = 10;
//     int b = 10;

//     cout << "local a " << (uintptr_t)&a << endl;
//     cout << "local b " << (uintptr_t)&b << endl;

//     cout << "global g_a " << (uintptr_t)&g_a << endl;
//     cout << "global g_b " << (uintptr_t)&g_b << endl;

//     static int s_a = 10;
//     static int s_b = 10;

//     cout << "static s_a " << (uintptr_t)&s_a << endl;
//     cout << "static s_b " << (uintptr_t)&s_b << endl;

//     cout << "string " << (uintptr_t)&"hello world" << endl;
//     cout << "string " << (uintptr_t)&"hello world1" << endl;

//     cout << "const global c_g_a" << (uintptr_t)&c_g_a << endl;
//     cout << "const global c_g_b" << (uintptr_t)&c_g_b << endl;

//     const int c_l_a = 10;
//     const int c_l_b = 10;
//     cout << "const c_l_b" << (uintptr_t)&c_l_b << endl;
//     cout << "const c_l_b" << (uintptr_t)&c_l_b << endl;
    

//     return 0;
//}

// int * func()
// {
//  //   b = 100;
//     int a = 100009;
//     return &a;
// }

// int main()
// {
//     int *p = func();
//     cout << p << endl;
//     cout << *p << endl;
//     cout << *p << endl;
//     cout << p << endl;

// }

// int * func()
// {
//     int *a = new int(10);
//     return a; 
// }
// int main()
// {
//     int *p = func();
//     cout << *p << endl;
//     cout << *p << endl;
//     cout << *p << endl;
//     cout << *p << endl;
//     return 0;
// }

int * func()
{
    int *p = new int(10);
    return p;

}

void test01()
{
    int *p = func();
    cout << *p << endl;
    cout << *p << endl;
    cout << *p << endl;
    cout << *p << endl;

    delete p;

    cout << *p << endl;


}

void test02()
{
    int *arr = new int[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i + 100;
    }

    for (int i = 0; i < 10; i++)
    {
        /* code */
        cout << arr[i] << endl;
    }
    
 //   operator delete[] arr;
}

int main()
{
    test01();


    return 0;
}