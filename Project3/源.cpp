#include <iostream>
using namespace std;


//int main()
//{
//	int a = 10;
//	cout << !a << endl;
//	cout << !!a << endl;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 10;
//	cout << (a && b) << endl;
//
//	a = 10;
//	b = 0;
//	cout << (a && b) << endl;
//
//	a = 0;
//	b = 0;
//	cout << (a && b) << endl;
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 10;
//
//	cout << (a || b) << endl;
//
//	a = 0;
//	b = 0;
//
//	cout << (a || b) << endl;
// 
//
//	return 0;
//}
//
//int main()
//{
//	int score = 0;
//	cout << "������һ��������" << endl;
//	cin >> score;
//
//	cout << "������ķ���Ϊ��" << score << endl;
//
//	if (score > 600)
//	{
//		cout << "��������һ����ѧ��" << endl;
//	}
//
//
//	return 0;
//}

//int main()
//{
//	int score = 0;
//	cout << "�����뿼�Եķ���!" << endl;
//	cin >> score;
//
//	if (score > 600)
//	{
//		cout << "�ҿ�����һ����ѧ��" << endl;
//	}
//	else
//	{
//		cout << "��û���ϴ�ѧ�ѩҩn�ѩ�" << endl;
//	}
//
//	return 0;
//}

//int main()
//{
//	int score = 0;
//	cout << "��������ķ�����" << endl;
//	cin >> score;
//
//	if (score > 600)
//	{
//		cout << "�㿼��һ����ѧ��~��" << endl;
//	}
//	else if (score > 500)
//	{
//		cout << "�㿼���˶���~" << endl;
//	}
//	else if (score > 400)
//	{
//		cout << "�㿼�˸�����" << endl;
//	}
//	else
//	{
//		cout << "��û���ϴ�ѧ�ѩҩn�ѩ�" << endl;
//	}
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//
//	c = a > b ? a : b;
//	cout << "c = " <<  c << endl;
//
//	(a > b ? a : b) = 100;
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//
//	return 0;
//}

//int main()
//{
//	int score = 0;
//	cout << "�����Ӱ��֣�" << endl;
//	cin >> score;
//	switch (score)
//	{
//	case 10:
//	case 9:
//		cout << "����" << endl;
//		break;
//	case 8:
//		cout << "�ܺ�" << endl;
//		break;
//	case 7:
//	case 6:
//		cout << "һ��" << endl;
//		break;
//	default:
//		cout << "��Ƭ" << endl;
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	while (num < 10)
//	{
//		cout << "num = " << num << endl;
//		num++;
//	}
//	return 0;
//}

//int main()
//{
//	int num = 0;
//
//	do
//	{
//		cout << num << endl;
//		num++;
//	} while (num < 10);
//
//	return 0;
//}

//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		cout << i << endl;
//	}
//
//	return 0;
//}

//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			cout << "*" << " ";
//		}
//		cout << endl;
//	}
//
//	return 0;
//}


//int main()
//{
//	cout << "��ѡ�񸱱��Ѷ�" << endl;
//	cout << "1. ��ͨ" << endl;
//	cout << "2. ����" << endl;
//	cout << "3. ����" << endl;
//
//	int num = 0;
//	cin >> num;
//
//	switch (num)
//	{
//	case 1:
//		cout << "��ѡ������ͨ�Ѷ�" << endl;
//		break;
//	case 2:
//		cout << "��ѡ���������Ѷ�" << endl;
//		break;
//	case 3:
//		cout << "��ѡ���˵����Ѷ�" << endl;
//		break;
//	}
//
//	return 0;
//}

//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		if (i == 5)
//		{
//			break;
//		}
//		cout << i << endl;
//	}
//
//	return 0;
//}


//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			if (j == 5)
//			{
//				break;//ֻ����һ��
//			}
//			cout << "*" << " ";
//		}
//		cout << endl;
//	}
//
//	return 0;
//}

//int main()
//{
//	for (int i = 0; i < 100; i++)
//	{
//		if (i % 2 == 0)
//		{
//			continue;
//		}
//		cout << i << endl;
//	}
//
//	return 0;
//}

int main()
{
	cout << "1" << endl;

	goto FLAG;

	cout << "2" << endl;
	cout << "3" << endl;
	cout << "4" << endl;

	FLAG:

	cout << "5" << endl;

	return 0;
}
