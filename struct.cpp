#include <iostream>
#include <ctime>
using namespace std;

// struct student
// {
//     string name;
//     int age;
//     int score;
// }stu3;

// int main()
// {
//     struct student stu1;
//     stu1.name = "zhangsan";
//     stu1.age = 18;
//     stu1.score = 100;
//     cout << "Name: " << stu1.name << " age: " << stu1.age << " Score: " << stu1.score << endl;

//     struct student stu2 = {"lisi", 19, 60};
//     cout << "Name: " << stu2.name << " age: " << stu2.age << " Score: " << stu2.score << endl;

//     stu3.name = "wangwu";
//     stu3.age = 1000;
//     stu3.score = 77;
//     cout << "Name: " << stu3.name << " age: " << stu3.age << " Score: " << stu3.score << endl;


//     return 0;
// }

// struct student
// {
//     string name;
//     int age;
//     int score;
// };

// int main()
// {
//     struct student arr[3] = 
//     {
//         {"ZhangSan", 18, 80},
//         {"LiSi", 19, 60},
//         {"WangWu", 20, 70}
//     };

//     for (int i = 0; i < 3; i++)
//     {
//         cout << "Name: " << arr[i].name << " Age: " << arr[i].age << " Score: " << arr[i].score << endl;
//     }
//     return 0;
// }

// struct student
// {
//     string name;
//     int age;
//     int score;
// };

// int main()
// {
//     struct student stu = {"ZhangSan", 18, 100};
//     struct student *p = &stu;
//     p->score = 80;

//     cout << "Name: " << p->name << " Age: " << p->age << " Score: " << p->score << endl;

//     return 0;
// }

// struct student
// {
//     string name;
//     int age;
//     int score;
// };

// struct teacher
// {
//     int id;
//     string name;
//     int age;
//     struct student stu;
// };

// int main()
// {
//     struct teacher t1;
//     t1.id = 10000;
//     t1.name = "LaoWang";
//     t1.age = 40;
//     t1.stu.name = "ZhangSan";
//     t1.stu.age = 18;
//     t1.stu.score = 100;

//     cout << "Teacher ID is " << t1.id << " Name: " << t1.name << " Age: " << t1.age << endl;
//     cout << "Student Name " << t1.stu.name << " Age: " << t1.stu.age << " Score: " << t1.stu.score << endl;

// }

// struct student
// {
//     string name;
//     int age;
//     int score;
// };

// //value
// void printStudent(student stu)
// {
//     stu.age = 28;
//     cout << "SubFunction Name: " << stu.name << " Age: " << stu.age << " Score: " << stu.score << endl;
// }

// //adress 
// void printStudent2(student *stu)
// {
//     stu->age = 28;
//     cout << "SubFunction Name: " << stu->name << " Age: " << stu->age << " Score: " << stu->score << endl;
// }

// int main()
// {
//     student stu = {"ZhangSan", 18, 100};
//     //value
//     printStudent(stu);
//     cout << "Function Name: " << stu.name << " Age: " << stu.age << " Score: " << stu.score << endl;

//     cout << endl;

//     printStudent2(&stu);
//     cout << "Function Name: " << stu.name << " Age: " << stu.age << " Score: " << stu.score << endl;


//     return 0;
// }

// struct student
// {
//     string name;
//     int age;
//     int score;
// };

// void printStudent(const student *stu)
// {
// //    stu->age = 100;

//     cout << "Name: " << stu->name << " Age: " << stu->age << " Score: " << stu->score << endl;
// }

// int main()
// {
//     student stu = {"ZhangSan", 18, 100};
//     printStudent(&stu);

//     return 0;
// }

// struct Student
// {
//     string name;
//     int score;
// };
// struct Teacher
// {
//     string name;
//     Student sArray[5];
// };

// void allocateSpace(Teacher tArray[], int len)
// {
//     string tName = "teacher";
//     string sName = "student";
//     string nameSeed = "ABCDE";
//     for (int i = 0; i < len; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             tArray[i].sArray[j].name = sName + nameSeed[j];
//             tArray[i].sArray[j].score = rand() % 61 + 40;
//         }
//     }
// }

// void printTeachers(Teacher tArray[], int len)
// {
//     for (int i = 0; i < len; i++)
//     {
//         cout << tArray[i].name << endl;
//         for (int j = 0; j < 5; j++)
//         {
//             cout << "\tName: " << tArray[i].sArray[j].name << " Score: " << tArray[i].sArray[j].score << endl;
//         }  
//     }  
// }

// int main()
// {
//     srand((unsigned int)time(NULL));
    
//     Teacher tArray[3];
//     int len = sizeof(tArray) / sizeof(Teacher);
//     allocateSpace(tArray, len);
//     printTeachers(tArray, len);

//     return 0;
// }

struct hero
{
    string name;
    int age;
    string sex;
};
//bubble
void bubbleSort(hero arr[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < j - 1 - len; j++)
        {
            if (arr[j].age > arr[j + 1].age)
            {
                hero temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            
        }
        
    }
    
}

void printHeros(hero arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "Name: " << arr[i].name << " Sex: " << arr[i].sex << " Age: " << arr[i].age << endl;

    }
}

int main()
{
    struct hero arr[5] = 
    {
        {"刘备", 23, "男"},
        {"关羽", 22, "男"},
        {"张飞", 20, "男"},
        {"赵云", 21, "女"},
        {"貂蝉", 19, "女"},
    };

    int len = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, len);
    printHeros(arr, len);
    

    return 0;
}