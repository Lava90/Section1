#include<stdio.h>
#include<math.h>
#define pi 4.0*atan(1.0)
void sinandcos(){
	int  n;
	double sins;
	double coss;
	scanf_s("%d",&n);
	sins = sin((pi*n) / 180);
	coss = cos((pi*n) / 180);
	printf_s("%f\n",pi);
	printf_s("sin's value is %lf,cos's value is %lf\n",sins,coss);
}
void sin(){
	double  n;
	double sins;
	double coss;
	scanf_s("%f",&n);
	sins = sin(n);
	coss = cos(n);
	printf_s("sin's value is %lf,cos's value is %lf\n", sins, coss);
}