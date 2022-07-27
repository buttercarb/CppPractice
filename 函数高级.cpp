#include <iostream>
using namespace std;

// int func(int a, int b = 10, int c = 10)
// {
//     return a + b + c;
// }

// int func2(int a = 10, int b = 10);
// int func2(int a, int b)
// {
//     return a + b;
// }

// int main()
// {
//     cout << "ret = " << func(20, 20) << endl;
//     cout << "ret = " << func(100) << endl;
//     cout << "ret = " << func2(20, 20) << endl;

//     return 0;
// }

// void func(int a, int = 10)
// {
//     cout << "this is func" << endl;
// }

// int main()
// {
//     func(10, 10);
//     return 0;
// }

// void func()
// {
//     cout << "func()" << endl;
// }
// void func(int a)
// {
//     cout << "func(int a)" << endl;
// }
// void func(double a)
// {
//     cout << "func(double)" << endl;
// }
// void func(int a, double b)
// {
//     cout << "func(int a, double b)" << endl;
// }
// void func(double a, int b)
// {
//     cout << "func(double a, int b)" << endl;
// }

// int main()
// {
//     void();
//     void(10);
//     void(3.14);
//     void(10, 3.14);
//     void(3.14, 10);

//     return 0;
// }

void func(int &a)
{
    cout << "func(int &a)" << endl;
}
void func(const int &a)
{
    cout << "func(const int &a)" << endl;
}
void func2(int a, int b = 10)
{
    cout << "func2(int a, int b = 10)" << endl;
}
void func2(int a)
{
    cout << "func2(int a)" << endl;
}

int main()
{
    int a = 10;
    func(a);
    func(10);

    return 0;
}