// 1-1(2*2)+1/(3*3*3)...1/(n*n*n*....n)
#include<stdio.h>
#include<math.h>
float series(int n);
int main()
{
	int n;
	float sum=0.0;
	printf("\n enter n: ");
	scanf("%d", &n);
	sum=series(n);
	printf("sum is %f", sum);
	return 0;
}
float series(int n)
{
	int i,sign=1,y;
	float sum=0.0;
	for(i=1;i<=n;i++)
	{
		y=pow(i,i);
		sum=sum+(1.0/y)*sign;
		sign= sign*(-1);
	}
	return sum;
}
