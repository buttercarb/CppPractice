#include <iostream>
using namespace std;

class Person
{
public:
	Person() {};
	Person(int a, int b)
	{
		this->m_A = a;
		this->m_B = b;
	}
	Person operator + (const Person & p)
	{
		Person temp;
		temp.m_A = this->m_A + p.m_A;
		temp.m_B = this->m_B + p.m_B;
		return temp;
	}
public:
	int m_B;
	int m_A;
};

Person operator+(const Person& p2, int val)
{
	Person temp;
	temp.m_A = p2.m_A + val;
	temp.m_B = p2.m_B + val;
	return temp;
}

void test()
{
	Person p1(10, 10);
	Person p2(20, 20);

	Person p3 = p2 + p1;
	cout << "m_A:" << p3.m_A << "mB: " << p3.m_B << endl;
	Person p4 = p3 + 10;
	cout << "m_A:" << p4.m_A << "mB: " << p4.m_B << endl;
}

int main()
{
	test();
	return 0;
}