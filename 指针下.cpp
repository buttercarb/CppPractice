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

// int main()
// {
//     int *p = (int *)0x1100;

//     cout << p << endl;
//     cout << *p << endl;


//     return 0;
// }

// int main()
// {
//     int a = 10;
//     int b = 20;

//     const int *p1 = &a;
//     int * const p2 = &a;
//     const int const *p3 = &a;

//     p1 = &b;
//     cout << *p1 << endl;

//     *p2 = b;
//     cout << *p2 << endl;

// //    *p3 = b;
// //    cout << *p3 << endl;
//     return 0;
// }

// int main()
// {
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};

//     int *p = arr;

//     cout << "first element is " << arr[0] << endl;
//     cout << "point to first element" << *p << endl;

//     for (int i = 0; i < 10; i++)
//     {
//         cout << *p << endl;
//         p++;
//     }
     

//     return 0;
// }

// void swap1(int a, int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// void swap2(int *p1, int *p2)
// {
//     int temp = *p1;
//     *p1 = *p2;
//     *p2 = temp;
// }

// int main()
// {
//     int a = 10;
//     int b = 20;
// //    swap1(a, b);
//     swap2(&a , &b);

//     cout << "a = " << a << endl;
//     cout << "b = " << b << endl;
// }

// void bubbleSort(int *arr, int len)
// {
//     for (int i = 0; i < len - 1; i++)
//     {
//         for (int j = 0; j < len - 1 - i; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

// void printArray(int arr[], int len)
// {
//     for (int i = 0; i < len; i++)
//     {
//         cout << arr[i] << endl;
//     }
// }

// int main()
// {
//     int arr[] = {4,3,6,9,1,2,10,8,7,5};
//     int len = sizeof(arr)/sizeof(arr[0]);

//     bubbleSort(arr, len);
//     printArray(arr, len);

//     return 0;
// }


