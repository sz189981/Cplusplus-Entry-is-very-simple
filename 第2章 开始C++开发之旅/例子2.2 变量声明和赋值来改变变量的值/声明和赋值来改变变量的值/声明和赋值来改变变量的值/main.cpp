/*
20180101
*/
#include <iostream>
using namespace std;

static int ia;			//����һ��int�͵ľ�̬����
const  int ib = 10;		//����һ��int�ͳ���
void main(void)
{
	double dl;
	//cout << "dl = " << dl << endl;	//error C4700: ʹ����δ��ʼ���ľֲ�������dl��
	cout << "ia = " << ia << endl;

	dl = 10.0;			//������ֵ
	ia = ia + 11;		//ibֵ�����Ըı䣬��iaֵ���Ըı�
	cout << "ia = " << ia << endl;
	cout << "ib = " << ib << endl;
	cout << "dl = " << dl << endl;

	char c = 'A';		//����char���ͳ���
	c = c + 1;			//�ӷ�����
	cout << "c = " << c << endl;
	
	bool b = false;		//����bool���ͱ���
	cout << "b = " << b << endl;


	while (1);
}


