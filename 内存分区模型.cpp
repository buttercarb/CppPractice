#include <iostream>
using namespace std;

//global
int g_a = 10;
int g_b = 20;

//全局常量
const int c_g_a = 10;
const int c_g_b = 10;

int main()
{
    //local
    int a = 10;
    int b = 10;

    cout << "local a " << &a << endl;
    cout << "local b " << &b << endl;

    cout << "global g_a " << &g_a << endl;
    cout << "global g_b " << &g_b << endl;

    static int s_a = 10;
    static int s_b = 10;

    cout << "static s_a " << &s_a << endl;
    cout << "static s_b " << &s_b << endl;

    cout << "string " << &"hello world" << endl;
    cout << "string " << &"hello world1" << endl;

    cout << "const global c_g_a" << &c_g_a << endl;
    cout << "const global c_g_b" << &c_g_b << endl;

    const int c_l_a = 10;
    const int c_l_b = 10;
    cout << "const c_l_b" << &c_l_b << endl;
    cout << "const c_l_b" << &c_l_b << endl;
    

    return 0;
}