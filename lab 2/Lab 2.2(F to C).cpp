//Wap to covert temperature from fahrenheit to centigrade
#include<stdio.h>
int main()
{
	float f, c;
	printf("\n enter temperature in farenheit");
	scanf("%f", &f);
	c=(f-32)*(5.00/9.00);
	printf("\n temperature in centigrade is %f", c);
	return 0;
}
