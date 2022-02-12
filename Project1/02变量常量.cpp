#include<iostream>
using namespace std;

#define day 7//宏常量，定义在文件上方

int main2() {
	//变量
	int month = 24;
	//const修饰的变量，为常量
	const int year = 365;
	cout << "一年有" << year<<"年，一周有"<<day<<"天";

	return 0;
}