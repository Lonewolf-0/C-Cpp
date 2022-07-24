//Wap to calculate the absolute value?
#include<stdio.h>
int main()
{
	int n;
	printf("\n enter the number");
	scanf("\n%d", &n);
	if(n>=0)
	{
		printf("\n absolute value will be same that is %d", n);
	}
	else if(n<0)
	{
		n=(-n);
		printf("\n absolute value will be %d", n);
	}
	return 0;
}
