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
//	cout << "请输入一个分数！" << endl;
//	cin >> score;
//
//	cout << "您输入的分数为：" << score << endl;
//
//	if (score > 600)
//	{
//		cout << "您考上了一本大学！" << endl;
//	}
//
//
//	return 0;
//}

//int main()
//{
//	int score = 0;
//	cout << "请输入考试的分数!" << endl;
//	cin >> score;
//
//	if (score > 600)
//	{
//		cout << "我考上了一本大学！" << endl;
//	}
//	else
//	{
//		cout << "我没考上大学┭┮﹏┭┮" << endl;
//	}
//
//	return 0;
//}

//int main()
//{
//	int score = 0;
//	cout << "请输入你的分数！" << endl;
//	cin >> score;
//
//	if (score > 600)
//	{
//		cout << "你考上一本大学啦~！" << endl;
//	}
//	else if (score > 500)
//	{
//		cout << "你考上了二本~" << endl;
//	}
//	else if (score > 400)
//	{
//		cout << "你考了个三本" << endl;
//	}
//	else
//	{
//		cout << "你没考上大学┭┮﹏┭┮" << endl;
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
//	cout << "请给电影打分：" << endl;
//	cin >> score;
//	switch (score)
//	{
//	case 10:
//	case 9:
//		cout << "经典" << endl;
//		break;
//	case 8:
//		cout << "很好" << endl;
//		break;
//	case 7:
//	case 6:
//		cout << "一般" << endl;
//		break;
//	default:
//		cout << "烂片" << endl;
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
//	cout << "请选择副本难度" << endl;
//	cout << "1. 普通" << endl;
//	cout << "2. 困难" << endl;
//	cout << "3. 地狱" << endl;
//
//	int num = 0;
//	cin >> num;
//
//	switch (num)
//	{
//	case 1:
//		cout << "您选择了普通难度" << endl;
//		break;
//	case 2:
//		cout << "您选择了困难难度" << endl;
//		break;
//	case 3:
//		cout << "您选择了地狱难度" << endl;
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
//				break;//只跳出一层
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
