#include <iostream>
using namespace std;
//#include <string>

// const double PI = 3.14;

// class Circle
// {
//     public:
//     int m_r;

//     double calculateZC()
//     {
//         return 2 * PI * m_r;
//     }
// };

// int main()
// {
//     Circle c1;
//     c1.m_r = 10;

//     cout << "the long of Circle is " << c1.calculateZC() << endl;

//     return 0;
// }

// class Student
// {
//     public:
//     void setName(string name)
//     {
//         m_name = name;
//     }
//     void setID(int id)
//     {
//         m_id = id;
//     }
//     void showStudent()
//     {
//         cout << "name: " << m_name << "ID: " << m_id << endl;
//     }
//     public:
//     string m_name;
//     int m_id;
// };

// int main()
// {
//     Student stu;
//     stu.setName("Demacia!");
//     stu.setID(250);
//     stu.showStudent();

//     return 0;
// }

class Person
{
  public:
  string m_Name;
  protected:
  string m_Car;
  private:
  int m_Password;
  public:
  void func()
  {
    m_Name = "ZhangSan";
    m_Car = "拖拉机";
    m_Password = 123456;
  }  
};

int main()
{
    Person p;
    p.m_Name = "李四";
 //   p.m_Car = "Bentz";

    return 0;
}