#include <iostream>
using namespace std;

void main(void)
{
	int ia = 5;			//����int�ͱ���
	int ib = 10;
	cout << "ia = "<< ia << endl;
	cout << "ib = "<< ib << endl;
	cout << "����ֲ�������" << endl;
	{					//�������־
		int ia = 6;		//����һ��ͬ������
		ib = 11;
		cout << "ia = " << ia << endl;
		cout << "ib = " << ib << endl;
		cout << "�˳��ֲ�������" << endl;
	}
	cout << "ia = " << ia << endl;
	cout << "ib = " << ib << endl;

	while (1);
}


