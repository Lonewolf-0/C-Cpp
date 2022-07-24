//Wap to generate table of any number
#include<stdio.h>
int main()
{
	int n,i,t;
	printf("\n enter the number : ");
	scanf("\n%d", &n);
	for(i=1;i<=10;i++)
	{
		t=(n*i);
		printf("\n%d", t);
	}
	return 0;
}
