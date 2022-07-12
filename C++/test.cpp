//#include<stdio.h>
//int main()
//{
//	int scanf = 0; 命名冲突
//	int n;
//	scanf("%d", &n);
//	return 0;
//}



#include<iostream>
#include<vector>
#include<string>
//using namespace std;
// 
// 要使用标准库中的内容，有三种方式
// 1 指定命名空间，每个地方都要标记，最规范但是麻烦
// 2 把std整个展开，但如果定义的东西跟库中的冲突了，就没办法了(项目中不推荐)
// 3 对部分常用的展开
// 
//命名空间
namespace lsh
{
	int scanf = 10;

	int add(int a, int b)
	{
		return a + b;
	}

	//命名空间可以嵌套定义
	namespace n1
	{
		int l = -1;
	}
}

using std::endl;
using std::cout;
using std::cin;


int a = 0;



//cin	istream类型全局对象
//cout	ostream类型全局对象
//endl  全局的换行符号
//自动识别类型 -》函数重载、运算符重载

//int main()
//{
//	cout << lsh::scanf << endl;
//	cout << lsh::add(lsh::n1::l, 0) << endl;
//	int a = 1;
//	cout << a << endl;
//	cout << ::a << endl;//全局域
//	std::cin >> a;
//	cout << a << endl;
//	return 0;
//}


////缺省参数
//void testfunc(int a = 0)
//{
//	cout << a << endl;
//}
//
////半缺省
//void testfuncc(int a, int b = 10, int c = 20)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//}
//
////缺省，调用时，更灵活
//
//int main()
//{
//	testfunc();
//	testfunc(123);
//	testfuncc(11,11,11);
//	return 0;
//}

//C语言不允许定义同名函数
//C++可以，（参数的类型不同或个数不同）
int add(int a, int b)
{
	return a + b;
}

double add(double a, double b)
{
	return a + b;
}

//构成重载
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

//为什么C语言不支持重载， C++支持，C++底层是如何支持重载？
//extern "C" 作用是什么？

//引用，起别名

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

