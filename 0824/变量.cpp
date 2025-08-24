#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main() {
	int a = 10;
	float num1 = 3.1415926f;
	double num2 = 3.1415926;
	char ch = 'a';
	string str = "6666";
	cin >> str;
	cout << "a = " << a << endl;
	cout << "num1 = " << num1 << endl;  //Ä¬ÈÏÊä³ö6Î»
	cout << "num2 = " << num2 << endl;
	cout << (int)ch << endl;
	cout << str << endl;
	return 0;
}