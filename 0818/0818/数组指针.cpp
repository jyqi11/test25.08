#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%p", &arr);   //&arr����������ĵ�ַ
	printf("%p", &arr+1); //���40���ֽ�
	int (*p)[10] = &arr;   //p������ָ�룬����Ϊint (*) [10];
	return 0;
}