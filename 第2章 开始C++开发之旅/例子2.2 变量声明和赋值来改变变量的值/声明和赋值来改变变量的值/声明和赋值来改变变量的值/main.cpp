/*
20180101
*/
#include <iostream>
using namespace std;

static int ia;			//声明一个int型的静态变量
const  int ib = 10;		//声明一个int型常量
void main(void)
{
	double dl;
	//cout << "dl = " << dl << endl;	//error C4700: 使用了未初始化的局部变量“dl”
	cout << "ia = " << ia << endl;

	dl = 10.0;			//变量赋值
	ia = ia + 11;		//ib值不可以改变，但ia值可以改变
	cout << "ia = " << ia << endl;
	cout << "ib = " << ib << endl;
	cout << "dl = " << dl << endl;

	char c = 'A';		//声明char类型常量
	c = c + 1;			//加法运算
	cout << "c = " << c << endl;
	
	bool b = false;		//声明bool类型变量
	cout << "b = " << b << endl;


	while (1);
}


