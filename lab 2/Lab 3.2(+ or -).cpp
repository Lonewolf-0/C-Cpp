//Wap to find whether a given number is positive negative or zero?
#include<stdio.h>
int main()
{
	int n;
	printf("\n enter a number");
	scanf("\n %d", &n);
	if(n>0)
	{
		printf("\n number is positive");
	}
	else if(n<0)
	{
		printf("\n number is negative");
	}
	else
	{
		printf("\n number is zero");
	}
	return 0;
}
