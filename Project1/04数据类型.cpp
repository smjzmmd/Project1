#include<iostream>
#include<string>
using namespace std;

int main4() {

	cout << "----------------����---------------" << endl;
	//�����ͣ�2�ֽ�
	short num1 = 1;
	//���Σ�4�ֽ�
	int num2 = 2;

	//�����Σ�4�ֽ�
	long num3 = 3;

	//�������Σ�8�ֽ�
	long long num4 = 4;

	cout << "num1Ϊ"<<num1 << endl;
	cout << "num2Ϊ"<<num2 << endl;
	cout << "num3Ϊ"<<num3 << endl;
	cout << "num4Ϊ"<<num4 << endl;
	//sizeof(��������)==�����ռ�ÿռ�
	cout << "longռ�ÿռ䣺" <<sizeof(num3)<<endl ;
	cout<<"longlongռ�ÿռ�" <<sizeof(num4)<< endl;
	
	cout << "----------------������---------------" << endl;
	
	//�������㣨7��Ч���֣�ռ��4�ֽ�
	float f1 = 5.123456f;
	//˫�����㣨15-16��Ч���֣�ռ��8�ֽ�
	double d1 = 6.123456789012345;
	//Ĭ�ϴ�ӡ��ʾ6λ
	cout << "f1Ϊ" <<f1<< endl;
	cout << "d1Ϊ" <<d1<< endl;
	cout << "floatռ�ÿռ�" << sizeof(f1) << endl;
	cout << "doubleռ�ÿռ�" << sizeof(d1) << endl;

	cout << "----------------�ַ���---------------" << endl;

	char ch1 = 'a';
	cout << "" << endl;
	cout << "charռ��" << sizeof(ch1) << endl;

	char str[] = "aaaaaa";

	string str2 = "bbbbbbbb";

	cout << str;
	cout << str2<<endl;

	cout << "----------------------bool--------" << endl;

	bool b1 = true;
	bool b2 = false;
	bool b3 = 0;
	cout << b1 << "��"<<b2 <<"��"<< b3 << endl;

	system("pause");
	return 0;
}
