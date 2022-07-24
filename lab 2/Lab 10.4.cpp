/*Wap using functions to find the sum of series
  1^2 + 2^2 + 3^3.....*/
#include<stdio.h>
#include<math.h>
void series();
int main()
{
	series();
	return 0;
}
void series()
{
	int i=1,n,y,sum=0;
	printf("\n enter the number of last term");
	scanf("%d", &n);
	while(i<=n)
	{
		y=pow(i,2);
		sum=sum+y;
		i++;
	}
	printf("\n sum of the series 1^2 + 2^2 + 3^3..... is %d", sum);

}
	

	
