#include<iostream>
using namespace std;

int main6() {

	//if判断

	//三目运算
	int a = 1;
	int b = 2;
	int c;
	c = a > b ? a : b;
	cout << c<<endl;
	a > b ? a : b = 100;
	cout << "a:" << a << "----b:" << b << endl;

	//switch
	int d1 = 0;
	cout << "请给c++打分：";
	//cin>> d1;

	switch (d1) {

	case 10:
		cout << "牛啊";
		break;
	case 9:
		cout << "还行";
		break;
	case 8:
		cout << "勉强还行";
		break;
	default:
		cout << "垃圾\n";
	}


	//while
	cout << "---while---\n";
	int e = 0;
	while (e<10)
		cout << "循环第" << e++ << "次"<<endl;

	cout << "---do-while---\n";
	e = 0;

	do {
		cout << "循环第" << e++ << "次" << endl;
	} while (e<10);

	cout << "----for---\n";
	int f1 = 0;
	for (int i=0;i<5;i++) {
		cout << f1++ << endl;
	}



	return 0;
}
