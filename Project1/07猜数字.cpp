#include<iostream>
using namespace std;

int main7() {

	int num = rand() % 100 + 1;
	int inum = 0;
	cout << "�¸���"<<endl;
	
	while (1) {
	
		cin >> inum;
		if (num>inum) {
			cout << "��С�ˣ��ٲ¡�" << endl;
		}
		else if (num<inum) {
			cout << "�´��ˣ��ٲ¡�" << endl;
		}
		else {
			cout << "�Ŷ���!!!"<<"�������@"<<num << endl;
			break;
		}

	}
	return 0;
}
