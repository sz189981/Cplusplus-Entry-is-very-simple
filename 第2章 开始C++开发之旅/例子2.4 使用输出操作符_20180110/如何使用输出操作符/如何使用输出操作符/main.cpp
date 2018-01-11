#include <iostream>
#include <iomanip>		//使用控制符需要该头文件
using namespace std;

void main(void)
{
	int		ia = 12348;			//定义整形变量
	double	d  = 12.3456789;	//定义浮点型变量
	cout << "输出整数的不同进制和格式"<<endl;
	cout << "ia的八进制："<<oct<<ia<<endl;
	cout << "ia的十进制："<<dec<<ia<<endl;
	cout << "ia的十六进制："<<hex<<ia<<endl;
	//将十六进制中小写字母变为大写
	cout << "ia设置大写标志输出：" << setiosflags(ios::uppercase) << ia << endl;
	cout << dec;				//恢复默认输出进制格式
	cout << "ia设置大写标志输出：" << setiosflags(ios::uppercase) << ia << endl;
	cout << "ia输出位数：" << setw(10) << ia << endl;		//输出10个字节
	//输出10个字节，不足用'*'填充
	cout << "填充字符：" << setw(10) << setfill('*') << ia << endl;
	cout << "显示ia的标志位：" << setiosflags(ios::showpos) << ia << endl;	//显示整数正负号
	cout << resetiosflags(ios::showpos);					//对设置进行重置
	cout << "------------------------------------------------" << endl;
	cout << "输出浮点数不同格式" << endl;
	cout << "d默认输出" << d << endl;
	cout << "d设置输出精度为5：" << setprecision(5) << d << endl;	//输出精度控制
	cout << setprecision(6);										//恢复默认精度
	cout << "科学计数输出 d:" << setiosflags(ios::scientific) << d << endl;	//科学计数法输出




	while(1);
}










