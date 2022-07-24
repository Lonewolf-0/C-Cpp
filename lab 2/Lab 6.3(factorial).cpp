#include<stdio.h>
int main()
{
	int i,sum=0,fact=1,n;
	printf("\n enter the number for getting it's factorial");
	scanf("\n%d", &n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("\n factorial is : %d", fact);
	return 0;
}
