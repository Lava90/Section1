#include<stdio.h>
void temperature(){
	float f;
	double c;
	scanf_s("%f",&f);
	c = 5 * (f - 32) / 9;
	printf_s("%f\n",c);
}