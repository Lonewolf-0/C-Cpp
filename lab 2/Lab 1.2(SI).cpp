//Wap to calculate simple interest and take input from user
#include<stdio.h>
int main()
{
	float p,r,t;
	float SI;
	printf("\n enter principal value");
	scanf("%f", &p);
	printf("\n enter rate");
	scanf("%f", &r);
	printf("\n enter time in years");
	scanf("%f", &t);
	SI=(p*r*t)/100;
	printf("\n simple interest is %f", SI);
	return 0;
	}
