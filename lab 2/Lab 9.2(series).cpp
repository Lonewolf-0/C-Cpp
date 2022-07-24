// 1-1/3+1/5-1/7+1/9....upto n terms
#include<stdio.h>
float series(int n)
{
	int i,sign=1,c=1;
	float sum=0.0;
	for(i=1;i<=n;i++)
	{
		sum=sum+(1.0/c)*sign;
		c=c+2;
		sign=sign*(-1);
	}
	return sum;
}
int main()
{
	int n;
	float sum=0.0;
	printf("\n Enter the number till where the sum of the series has to be printed");
	scanf("%d", &n);
	sum=series(n);
	printf("\n sum of the function is %f", sum);

}
