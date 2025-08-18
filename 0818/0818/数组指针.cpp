#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%p", &arr);   //&arr是整个数组的地址
	printf("%p", &arr+1); //相差40个字节
	int (*p)[10] = &arr;   //p是数组指针，类型为int (*) [10];
	return 0;
}