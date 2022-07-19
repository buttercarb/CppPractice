#include <iostream>
using namespace std;

// int main()
// {
//     int a = 10;

//     int *p;

//     p = &a;

//     cout << &a << endl;
//     cout << p << endl;

//     cout << "*p = " << *p << endl;

//     return 0;
// }

// int main()
// {
//     int a = 10;
//     int *p;
//     p = &a;

//     cout << *p << endl;
//     cout << p << endl;
//     cout << sizeof(p) << endl;
//     cout << sizeof(char *) << endl;
//     cout << sizeof(float *) << endl;
//     cout << sizeof(double *) << endl;

//     return 0;
// }

// int main()
// {
//     int *p = NULL;

//     cout << p << endl;
// //    cout << *p << endl;

//     return 0;
// }

int main()
{
    int *p = (int *)0x1100;

    cout << p << endl;
    cout << *p << endl;


    return 0;
}