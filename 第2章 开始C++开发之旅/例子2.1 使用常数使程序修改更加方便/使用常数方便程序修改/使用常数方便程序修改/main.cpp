#include <iostream>
using namespace std;

#define pi1 3.1415					//宏定义一个常量
const double pi2 = 3.1415;			//const 关键字定义一个常量
double const pi3 = 3.1415;

void main(void)
{
	double area1, area2, area3;		//声明3个变量
	double r = 2.0;					//声明边长
	area1 = pi1 * r * r;			//计算圆的面积
	area2 = pi2 * r * r;
	area3 = pi3 * r * r;

	cout << "area1 is :"<< area1<< endl;
	cout << "area2 is :"<< area2<< endl;
	cout << "area3 is :"<< area3<< endl;

	while (1);
}







