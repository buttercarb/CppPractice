#include <iostream>
using namespace std;
#include<string>

//class Person
//{
//public:
//	Person()
//	{
//		mA = 0;
//	}
//	int mA;
//	static int mB;
//	void func()
//	{
//		cout << "mA: " << this->mA << endl;
//	}
//	static void sfunc()
//	{
//	}
//};
//int main()
//{
//	cout << sizeof(Person) << endl;
//
//	return 0;
//}

//class Person
//{
//public:
//	Person(int age)
//	{
//		this->age = age;
//	}
//
//	Person& PersonAddPerson(Person p)
//	{
//		this->age += p.age;
//		return *this;
//	}
//	int age;
//};
//void test01()
//{
//	Person p1(20);
//	cout << "p1.age = " << p1.age << endl;
//	Person p2(10);
//	p2.PersonAddPerson(p1).PersonAddPerson(p1).PersonAddPerson(p1);
//	cout << "p2.age = " << p2.age << endl;
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
//	void showClassName()
//	{
//		cout << "I am Person class!" << endl;
//	}
//	void ShowPerson()
//	{
//		if (this == NULL)
//		{
//			return;
//		}
//		cout << mAge << endl;
//	}
//public:
//	int mAge;
//};
//
//void test01()
//{
//	Person* p = NULL;
//	p->showClassName();
//	p->ShowPerson();
//}
//
//int main()
//{
////	int mAge = 10;
//	test01();
//	return 0;
//}

//class Person
//{
//public:
//	Person()
//	{
//		m_A = 0;
//		m_B = 0;
//	}
//	void ShowPerson() const
//	{
//		this->m_B = 100;
//	}
//	void Myfunc() const
//	{
//
//	}
//public:
//	int m_A;
//	mutable int m_B;
//};
//void test01()
//{
//	const Person person;
//	cout << person.m_A << endl;
//	person.m_B = 100;
//	person.Myfunc();
//}
//int main()
//{
//	test01();
//
//	return 0;
//}

//class Building
//{
//	friend void goodGay(Building* building);
//public:
//	Building()
//	{
//		this->m_SittingRoom = "A";
//		this->m_BedRoom = "B";
//	}
//
//public:
//	string m_SittingRoom;
//
//private:
//	string m_BedRoom;
//};
//
//void goodGay(Building* building)
//	{
//		cout << "Good gay is looking for " << building->m_SittingRoom << endl;
//		cout << "Good gay is looking for " << building->m_BedRoom << endl;
//	}
//
//
//void test01()
//{
//	Building b;
//	goodGay(&b);
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}

//class Building;
//class goodGay
//{
//public:
//	goodGay();
//	void visit();
//
//private:
//	Building* building;
//};
//
//class Building
//{
//	friend class goodGay;
//public:
//	Building();
//public:
//	string m_SittingRoom;
//private:
//	string m_BedRoom;
//};
//
//Building::Building()
//{
//	this->m_SittingRoom = "A";
//	this->m_BedRoom = "B";
//}
//goodGay::goodGay()
//{
//	building = new Building;
//}
//
//void goodGay::visit()
//{
//	cout << "Good gay is visiting " << building->m_SittingRoom << endl;
//	cout << "Good gay is visiting " << building->m_BedRoom << endl;
//}
//void test01()
//{
//	goodGay gg;
//	gg.visit();
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}

class Building;
class goodGay
{
public:
	goodGay();
	void visit();
	void visit2();

private:
	Building* building;
};

class Building
{
	friend void goodGay::visit();
public:
	Building();
public:
	string m_SittingRoom;
private:
	string m_BedRoom;
};

Building::Building()
{
	this->m_SittingRoom = "A";
	this->m_BedRoom = "B";
}

goodGay::goodGay()
{
	building = new Building;
}

void goodGay::visit()
{
	cout << "good gay is visiting " << building->m_SittingRoom << endl;
	cout << "good gay is visiting " << building->m_BedRoom << endl;
}

void goodGay::visit2()
{
	cout << "good gay is visiting " << building->m_SittingRoom << endl;
//	cout << "good gay is visiting " << building->m_BedRoom << endl;
}
void test01()
{
	goodGay gg;
	gg.visit();
	gg.visit2();
}

int main()
{
	test01();

	return 0;
}