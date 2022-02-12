#include<iostream>
#include<string>
using namespace std;

int main4() {

	cout << "----------------整形---------------" << endl;
	//短整型（2字节
	short num1 = 1;
	//整形（4字节
	int num2 = 2;

	//长整形（4字节
	long num3 = 3;

	//长长整形（8字节
	long long num4 = 4;

	cout << "num1为"<<num1 << endl;
	cout << "num2为"<<num2 << endl;
	cout << "num3为"<<num3 << endl;
	cout << "num4为"<<num4 << endl;
	//sizeof(数据类型)==》求出占用空间
	cout << "long占用空间：" <<sizeof(num3)<<endl ;
	cout<<"longlong占用空间" <<sizeof(num4)<< endl;
	
	cout << "----------------浮点形---------------" << endl;
	
	//单精浮点（7有效数字，占用4字节
	float f1 = 5.123456f;
	//双精浮点（15-16有效数字，占用8字节
	double d1 = 6.123456789012345;
	//默认打印显示6位
	cout << "f1为" <<f1<< endl;
	cout << "d1为" <<d1<< endl;
	cout << "float占用空间" << sizeof(f1) << endl;
	cout << "double占用空间" << sizeof(d1) << endl;

	cout << "----------------字符形---------------" << endl;

	char ch1 = 'a';
	cout << "" << endl;
	cout << "char占：" << sizeof(ch1) << endl;

	char str[] = "aaaaaa";

	string str2 = "bbbbbbbb";

	cout << str;
	cout << str2<<endl;

	cout << "----------------------bool--------" << endl;

	bool b1 = true;
	bool b2 = false;
	bool b3 = 0;
	cout << b1 << "和"<<b2 <<"与"<< b3 << endl;

	system("pause");
	return 0;
}
