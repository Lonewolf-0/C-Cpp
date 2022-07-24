/*Wap using functions to find the sum of series
  1 + 2*1 + 3*2 + 4*3.....*/
#include<stdio.h>
int series(int n);
int main()
{
	int sum,n;
	printf("\n enter the number of last term");
	scanf("%d", &n);
	sum=series(n);
	printf("\n sum of the series 1 + 2*1 + 3*2 + 4*3..... is %d", sum);
	return 0;
}
int series(int n)
{
	int sum=1,first=0,second,i=1;
	while(i<=n)
	{
		sum=sum+(first*second);
		first = first +1;
		second = first + 1;
		i++;
	}
	return sum;
}
