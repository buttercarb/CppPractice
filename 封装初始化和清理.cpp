//#include <iostream>
//using namespace std;
//
//class C1
//{
//	int m_A;
//};
//
//struct C2
//{
//	int m_A;
//};
//
//int main()
//{
//	C1 c1;
//	//c1.m_A = 10;
//	C2 c2;
//	c2.m_A = 10;
//
//	return 0;
//}
#include <iostream>
using namespace std;
#include <string>

//class Person
//{
//public:
//	void setName(string name)
//	{
//		m_Name = name;
//	}
//	string getName()
//	{
//		return m_Name;
//	}
//	int getAge()
//	{
//		return m_Age;
//	}
//	void setAge(int age)
//	{
//		if (age < 0 || age > 150)
//		{
//			cout << "你个老妖精！" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//	void setLover(string lover)
//	{
//		m_Lover = lover;
//	}
//private:
//	string m_Name;
//	int m_Age;
//	string m_Lover;
//};
//int main()
//{
//	Person p;
//	p.setName("张三");
//	cout << "姓名：" << p.getName() << endl;
//
//	p.setAge(50);
//	cout << "年龄：" << p.getAge() << endl;
//
//	p.setLover("Yuna");
//	//cout << "情人：" << p.m_Lover << endl;
//
//	return 0;
//}

//class Person
//{
//public:
//	Person()
//	{
//		cout << "GOUZAO" << endl;
//	}
//	~Person()
//	{
//		cout << "XIGOU" << endl;
//	}
//
//};
//
//void test01()
//{
//	Person p;
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}

//class Person
//{
//public:
//	Person()
//	{
//		cout << "No parameter!" << endl;
//	}
//	Person(int a)
//	{
//		age = a;
//		cout << "A parameter!" << endl;
//	}
//	Person(const Person& p)
//	{
//		age = p.age;
//		cout << "Copy parameter!" << endl;
//	}
//	~Person()
//	{
//		cout << "XiGou" << endl;
//	}
//
//public:
//	int age;
//};
//
//void test01()
//{
//	Person p;
//}
//
//void test02()
//{
//	Person p1(10);
//	Person p2 = Person(10);
//	Person p3 = Person(p2);
//	Person p4 = 10;
//	Person p5 = p4;
//}
//int main()
//
//{
//	test01();
//
//	test02();
//
//	return 0;
//}

//class Person
//{
//public:
//	Person()
//	{
//		cout << "No Parameter" << endl;
//		mAge = 0;
//	}
//	Person(int age)
//	{
//		cout << "A parameter" << endl;
//		mAge = age;
//	}
//	Person(const Person& p)
//	{
//		cout << "Copy " << endl;
//		mAge = p.mAge;
//	}
//public:
//	int mAge;
//};
//
//void test01()
//{
//	Person man(100);
//	Person newman(man);
//	Person newman2 = man;
//}
//
//void doWork(Person p1){}
//void test02()
//{
//	Person p;
//	doWork(p);
//}
//
//Person doWork2()
//{
//	Person p1;
//	cout << (int*)&p1 << endl;
//	return p1;
//}
//
//void test03()
//{
//	Person p = doWork2();
//	cout << (int*)&p << endl;
//}
//
//int main()
//{
//	test01();
//	test02();
//	test03();
//
//	return 0;
//}

//class Person
//{
//public:
//	Person()
//	{
//		cout << "No Parameter!" << endl;
//	}
//	Person(int a)
//	{
//		age = a;
//		cout << "A parameter" << endl;
//	}
//	Person(const Person& p)
//	{
//		age = p.age;
//		cout << "Copy " << endl;
//	}
//	~Person()
//	{
//		cout << "destructor" << endl;
//	}
//public:
//	int age;
//};
//void test01()
//{
//	Person p1(18);
//	Person p2(p1);
//	cout << "the age of p2 is " << p2.age << endl;
//}
//void test02()
//{
//	Person p1;
//	Person p2(10);
//	Person p3(p2);
//
//	Person p4;
//	Person p5(10);
//	Person p6(p5);
//}
//int main()
//{
//	test01();
//	test02();
//
//	return 0;
//}

//class Person
//{
//public:
//	Person()
//	{
//		cout << "No parameter" << endl;
//	}
//	Person(int age, int height)
//	{
//		cout << "A parameter" << endl;
//		m_age = age;
//		m_height = new int(height);
//	}
//	Person(const Person& p)
//	{
//		cout << "Copy" << endl;
//		m_age = p.m_age;
//		m_height = new int(*p.m_height);
//	}
//	~Person()
//	{
//		cout << "destructor" << endl;
//		if (m_height != NULL)
//		{
//			delete m_height;
//		}
//	}
//public:
//	int m_age;
//	int* m_height;
//};
//void test01()
//{
//	Person p1(18, 180);
//	Person p2(p1);
//	cout << "the age of p1 is " << p1.m_age << " the height of p1 is " << *p1.m_height << endl;
//	cout << "the age of p2 is " << p2.m_age << " the height of p2 is " << *p2.m_height << endl;
//}
//
//int main() 
//{
//	test01();
//
//	return 0;
//}

//class Person
//{
//public:
//	Person(int a, int b, int c) : m_A(a), m_B(b), m_C(c) {}
//
//	void PrintPerson()
//	{
//		cout << "mA" << m_A << endl;
//		cout << "mB" << m_B << endl;
//		cout << "mC" << m_C << endl;
//	}
//private:
//	int m_A;
//	int m_B;
//	int m_C;
//};
//
//int main()
//{
//	Person p(1, 2, 3);
//	p.PrintPerson();
//
//	return 0;
//}

//class Phone
//{
//public:
//	Phone(string name)
//	{
//		m_PhoneName = name;
//		cout << "Constructor" << endl;
//	}
//	~Phone()
//	{
//		cout << "Destructor" << endl;
//	}
//	string m_PhoneName;
//};
//
//class Person
//{
//public:
//	Person(string name, string pName) :m_Name(name), m_Phone(pName)
//	{
//		cout << "Person constructor" << endl;
//	}
//	~Person()
//	{
//		cout << "Person Destructor" << endl;
//	}
//	void playGame()
//	{
//		cout << m_Name << " use " << m_Phone.m_PhoneName << " phone!" << endl;
//	}
//	string m_Name;
//	Phone m_Phone;
//};
//void test01()
//{
//	Person p("ZhangSan", "iPhoneX");
//	p.playGame();
//}
//int main()
//{
//	test01();
//
//	return 0;
//}

//class Person
//{
//public:
//	static int m_A;
//private:
//	static int m_B;
//};
//
//int Person::m_A = 10;
//int Person::m_B = 10;
//
//void test01()
//{
//	Person p1;
//	p1.m_A = 100;
//	cout << "p1.m_A = " << p1.m_A << endl;
//
//	Person p2;
//	p2.m_A = 200;
//	cout << "p1.m_A = " << p1.m_A << endl;
//	cout << "p2.m_A = " << p2.m_A << endl;
//
//	cout << "m_A = " << Person::m_A << endl;
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}

class Person
{
public:
	static void func()
	{
		cout << "func used" << endl;
		m_A = 100;
	}
	static int m_A;
	int m_B;
private:
	static void func2()
	{
		cout << "func2 used" << endl;
	}
};

int Person::m_A = 10;

void test01()
{
	Person p1;
	p1.func();

	Person::func();
}
int main()
{
	test01();

	return 0;
}