//#include<stdio.h>
//int main()
//{
//	int scanf = 0; ������ͻ
//	int n;
//	scanf("%d", &n);
//	return 0;
//}



#include<iostream>
#include<vector>
#include<string>
//using namespace std;
// 
// Ҫʹ�ñ�׼���е����ݣ������ַ�ʽ
// 1 ָ�������ռ䣬ÿ���ط���Ҫ��ǣ���淶�����鷳
// 2 ��std����չ�������������Ķ��������еĳ�ͻ�ˣ���û�취��(��Ŀ�в��Ƽ�)
// 3 �Բ��ֳ��õ�չ��
// 
//�����ռ�
namespace lsh
{
	int scanf = 10;

	int add(int a, int b)
	{
		return a + b;
	}

	//�����ռ����Ƕ�׶���
	namespace n1
	{
		int l = -1;
	}
}

using std::endl;
using std::cout;
using std::cin;


int a = 0;



//cin	istream����ȫ�ֶ���
//cout	ostream����ȫ�ֶ���
//endl  ȫ�ֵĻ��з���
//�Զ�ʶ������ -���������ء����������

//int main()
//{
//	cout << lsh::scanf << endl;
//	cout << lsh::add(lsh::n1::l, 0) << endl;
//	int a = 1;
//	cout << a << endl;
//	cout << ::a << endl;//ȫ����
//	std::cin >> a;
//	cout << a << endl;
//	return 0;
//}


////ȱʡ����
//void testfunc(int a = 0)
//{
//	cout << a << endl;
//}
//
////��ȱʡ
//void testfuncc(int a, int b = 10, int c = 20)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//}
//
////ȱʡ������ʱ�������
//
//int main()
//{
//	testfunc();
//	testfunc(123);
//	testfuncc(11,11,11);
//	return 0;
//}

//C���Բ�������ͬ������
//C++���ԣ������������Ͳ�ͬ�������ͬ��
int add(int a, int b)
{
	return a + b;
}

double add(double a, double b)
{
	return a + b;
}

//��������
//int f(int a, int b, int c = 0)
//{
//
//}
//
//int f(int a, int b)
//{
//
//}

//void swap(int& a, int& b)
//{
//	int c = a;
//	a = b;
//	b = a;
//}

//int main()
//{
//	cout << add(1.213, 0.31231) << endl;
//	/*f(1, 2, 2);*/
//	return 0;
//}

//ΪʲôC���Բ�֧�����أ� C++֧�֣�C++�ײ������֧�����أ�
//extern "C" ������ʲô��

//���ã������

void swap(int& a, int& b)
{
	int c = a;
	a = b;
	b = c;
}
int main()
{
	int& b = a;
	a = 1000;
	//cout << b;
	b = 20;
	//cout << b;
	int& c = b;
	int& d = c;
	d = 1000000;
	int o, m;
	o = 10, m = 1;
	cout << o << " " << m << endl;
	swap(o, m);
	cout << o << " " << m << endl;
	return 0;
}

