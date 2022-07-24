/*Write a program to check whether a given a number is prime or not. 
If prime calculate the square of the number else find its cube.*/
#include<stdio.h>
int main()
{
	int i,n,c=0,sq,cu;
	printf("\n enter number");
	scanf("%d", &n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			c=c+1;
		}
	}
	if(c!=0)
	{
		printf("\n number is not prime");
		cu=n*n*n;
		printf("\n cube of the number is %d", cu);
	}
	else
	{
	    printf("\n number is prime");
	    sq=n*n;
	    printf("\n square of the number is %d", sq);
	}
	return 0;
}
