#include <iostream>
#include <iomanip>		//ʹ�ÿ��Ʒ���Ҫ��ͷ�ļ�
using namespace std;

void main(void)
{
	int		ia = 12348;			//�������α���
	double	d  = 12.3456789;	//���帡���ͱ���
	cout << "��������Ĳ�ͬ���ƺ͸�ʽ"<<endl;
	cout << "ia�İ˽��ƣ�"<<oct<<ia<<endl;
	cout << "ia��ʮ���ƣ�"<<dec<<ia<<endl;
	cout << "ia��ʮ�����ƣ�"<<hex<<ia<<endl;
	//��ʮ��������Сд��ĸ��Ϊ��д
	cout << "ia���ô�д��־�����" << setiosflags(ios::uppercase) << ia << endl;
	cout << dec;				//�ָ�Ĭ��������Ƹ�ʽ
	cout << "ia���ô�д��־�����" << setiosflags(ios::uppercase) << ia << endl;
	cout << "ia���λ����" << setw(10) << ia << endl;		//���10���ֽ�
	//���10���ֽڣ�������'*'���
	cout << "����ַ���" << setw(10) << setfill('*') << ia << endl;
	cout << "��ʾia�ı�־λ��" << setiosflags(ios::showpos) << ia << endl;	//��ʾ����������
	cout << resetiosflags(ios::showpos);					//�����ý�������
	cout << "------------------------------------------------" << endl;
	cout << "�����������ͬ��ʽ" << endl;
	cout << "dĬ�����" << d << endl;
	cout << "d�����������Ϊ5��" << setprecision(5) << d << endl;	//������ȿ���
	cout << setprecision(6);										//�ָ�Ĭ�Ͼ���
	cout << "��ѧ������� d:" << setiosflags(ios::scientific) << d << endl;	//��ѧ���������




	while(1);
}










