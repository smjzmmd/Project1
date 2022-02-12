#include<iostream>
using namespace std;

int main7() {

	int num = rand() % 100 + 1;
	int inum = 0;
	cout << "猜个数"<<endl;
	
	while (1) {
	
		cin >> inum;
		if (num>inum) {
			cout << "猜小了，再猜。" << endl;
		}
		else if (num<inum) {
			cout << "猜大了，再猜。" << endl;
		}
		else {
			cout << "才对了!!!"<<"随机数是@"<<num << endl;
			break;
		}

	}
	return 0;
}
