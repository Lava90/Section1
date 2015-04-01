#include<stdio.h>
void sum(){
	int n;
	int sum;
	scanf_s("%d",&n);
	sum = (1 + n)*n / 2;
	printf_s("%d\n",sum);
}