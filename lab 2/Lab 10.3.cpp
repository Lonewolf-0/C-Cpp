/*Wap using functions to find the sum of series
  1-x+x^2-x^3+x^4.....*/
#include<stdio.h>
#include<math.h>
void series(int n);
int main()
{
	int n,sum;
	printf("\n enter the number of last term");
	scanf("%d", &n);
	series(n);
	return 0;
}
void series(int n)
{
	int x,i=0,sum=0,y,fact=1,sign=1;
	printf("\n enter the value of x");
	scanf("%d", &x);
	while(i<=(n-1))
	{
		y=pow(x,i);
    	sum=sum+ sign*y;
    	sign=sign*(-1);
    	i++;
	}
    printf("\n sum of the series 1-x+x^2-x^3+x^4..... is %d", sum);
}
