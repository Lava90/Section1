#include<stdio.h>
void triangle(){
	int a, b, c;
	int n;
	scanf_s("%d %d %d",&a,&b,&c);
	if (a > b){ n = a, a = b, b = n; }
	if (a > c){ n = a, a = c, c = n; }
	if (b > c){ n = b, b = c, c = n; }
	printf_s("%d %d %d\n",a,b,c);
	if (a + b<c){ printf_s("not a triangle"); }
	else if (c*c == a*a + b*b){ printf_s("yes"); }
	else{ printf_s("no"); }
}