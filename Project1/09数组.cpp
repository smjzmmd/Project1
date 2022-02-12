#include<iostream>
using namespace std;

int main() {

	int a[5] = {1,2,3,4,5};
	//数组占用空间
	cout << sizeof(a)<<endl;
	//数组中，单个数占用空间
	cout << sizeof(a[1])<<endl;
	cout << a << endl;
	cout << &a << endl;
	cout << &a[1] << endl;
	cout << (int)&a << endl;
	//获得元素个数
	cout << sizeof(a) / sizeof(a[1]) << endl;

	return 0;
}