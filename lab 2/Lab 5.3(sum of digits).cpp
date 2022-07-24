//Wap to find the sum of digits of a number
#include<stdio.h>
int main()
{
	int n,r,sum=0;
	printf("\n enter the number : ");
	scanf("\n%d", &n);
	while(n!=0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("\n sum of the digits is %d", sum);
	return 0;
}
