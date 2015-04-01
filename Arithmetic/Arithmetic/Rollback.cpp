#include<stdio.h>
#include<iostream>
void rollback(){
	int n;
	int total;
	scanf_s("%d", &n);
	total = n % 10 * 100 + n / 10 % 10 * 10 + n / 100;
	printf("%03d\n",total);
}