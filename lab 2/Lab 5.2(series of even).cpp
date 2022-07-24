//Wap to generate even series from 1 to 50 using loop
#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("\n enter the last number : ");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		    printf("\n%d", i);
		    sum=sum+i;
    }
    printf("sum of 1+2+3+4+....n is %d", sum); 
	return 0;
}
