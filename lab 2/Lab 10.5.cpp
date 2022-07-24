/*Wap using functions to find the sum of series
  1^2 - 2^2 + 3^3 -4^2.....*/
#include<stdio.h>
#include<math.h>
int series();
int main()
{
	int sum;
	sum=series();
	printf("\n sum of the series 1^2 - 2^2 + 3^3 -4^2..... is %d", sum);
	return 0;
}
int series()
{
	int i=1,n,y,sum=0,sign=1;
	printf("\n enter the number of last term");
	scanf("%d", &n);
	while(i<=n)
	{
		y=pow(i,2);
		sum=sum+(y*sign);
		i++;
		sign=sign*(-1);
	}
	return sum;
}

