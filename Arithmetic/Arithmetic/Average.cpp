#include<stdio.h>
void average(){
	int a, b, c;
	double average;
	scanf_s("%d %d %d",&a,&b,&c);
	average = (a + b + c) / 3;
	printf_s("%.3f\n",average);
}