#include <iostream>
using namespace std;

void main(void)
{
	int ia = 5;			//声明int型变量
	int ib = 10;
	cout << "ia = "<< ia << endl;
	cout << "ib = "<< ib << endl;
	cout << "进入局部作用域" << endl;
	{					//作用域标志
		int ia = 6;		//声明一个同名变量
		ib = 11;
		cout << "ia = " << ia << endl;
		cout << "ib = " << ib << endl;
		cout << "退出局部作用域" << endl;
	}
	cout << "ia = " << ia << endl;
	cout << "ib = " << ib << endl;

	while (1);
}


