#include <iostream>
using namespace std;

// int main()
// {
//     cout << "hello world" << endl;
//     return 0;
// }
// int main()
// {
//     int score[10];

//     score[0] = 100;
//     score[1] = 99;
//     score[2] = 85;

//     cout << score[0] << endl;
//     cout << score[1] << endl;
//     cout << score[2] << endl;
//     for (int i = 0; i < 10; i++)
//     {
//         cout << score[i] << endl;
//     }
//     return 0;
// }

// int main()
// {
//     int score[10] = {100, 90, 88, 87, 66, 3};

//     for (int i = 0; i < 10; i++)
//     {
//         cout << score[i] << endl;
//     }
    

//     return 0;
// }

// 

// int main()
// {
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};

//     cout << sizeof(arr) << endl;
//     cout << sizeof(arr[0]) << endl;
//     cout << sizeof(arr)/sizeof(arr[0]) << endl;

//     cout << &arr[0] << endl;
//     cout << &arr << endl;
//     cout << arr << endl;
//     cout << &arr[1] << endl;

//     return 0;
// }

// int main()
// {
//     int arr[] = {4, 343, 68, 44587, 12, 97, 6, 64, 78, 34, 346};

//     for (int i = 0; i < sizeof(arr)/sizeof(arr[0]) - 1; i++)
//     {
//         for (int j = 0; j < sizeof(arr)/sizeof(arr[0]) - 1 - i; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
            
//         }
        
//     }
//     for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
//     {
//         cout << arr[i] << endl;
//     }
    
//     return 0;
// }

// 

int main()
{
    int arr[2][3] = 
    {
        {1,2,3},
        {4,5,6}
    };
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    

    return 0;
}