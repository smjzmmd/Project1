#include<iostream>
using namespace std;

int main() {

	int a[5] = {1,2,3,4,5};
	//����ռ�ÿռ�
	cout << sizeof(a)<<endl;
	//�����У�������ռ�ÿռ�
	cout << sizeof(a[1])<<endl;
	cout << a << endl;
	cout << &a << endl;
	cout << &a[1] << endl;
	cout << (int)&a << endl;
	//���Ԫ�ظ���
	cout << sizeof(a) / sizeof(a[1]) << endl;

	return 0;
}