#include<iostream>
using namespace std;

int main8() {

	int num = 100;

	int a = 0;
	int b = 0;
	int c = 0;

	do {
		a = num % 10;

		b = (num / 10) % 10;

		c = num / 100;

		if (num==(a*a*a+b*b*b+c*c*c)) {
			cout <<"---------" << num << "------" << endl;
		}
		num++;
	}while(num<1000);

	return 0;
}