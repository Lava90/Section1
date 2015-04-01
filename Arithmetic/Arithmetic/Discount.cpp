#include<stdio.h>
#define n 39
void discount(){
	int t;
	double sum;
	scanf_s("%d",&t);
	sum = t*n;
	if (t*n>=300){
		sum = sum*0.85;
		printf_s("%f\n",sum);
		}
	else{
		printf_s("%f\n",sum);
	}
	//printf_s("%d\n",n);
}