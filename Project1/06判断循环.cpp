#include<iostream>
using namespace std;

int main6() {

	//if�ж�

	//��Ŀ����
	int a = 1;
	int b = 2;
	int c;
	c = a > b ? a : b;
	cout << c<<endl;
	a > b ? a : b = 100;
	cout << "a:" << a << "----b:" << b << endl;

	//switch
	int d1 = 0;
	cout << "���c++��֣�";
	//cin>> d1;

	switch (d1) {

	case 10:
		cout << "ţ��";
		break;
	case 9:
		cout << "����";
		break;
	case 8:
		cout << "��ǿ����";
		break;
	default:
		cout << "����\n";
	}


	//while
	cout << "---while---\n";
	int e = 0;
	while (e<10)
		cout << "ѭ����" << e++ << "��"<<endl;

	cout << "---do-while---\n";
	e = 0;

	do {
		cout << "ѭ����" << e++ << "��" << endl;
	} while (e<10);

	cout << "----for---\n";
	int f1 = 0;
	for (int i=0;i<5;i++) {
		cout << f1++ << endl;
	}



	return 0;
}
