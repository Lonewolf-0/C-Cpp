// 1+(1+2)+(1+2+3)+(1+2+3+4)+.....+(1+2+3+....+n)
#include<stdio.h>
void series(int n)
{
    int i,k, sum=0;
    for(i=1;i<=n;i++)
    {
       for(k=1;k<=i;k++)
       sum=sum+k;
    }
    printf("\n sum of the function is %d", sum);
}
int main()
{
	int n;
	printf("\n Enter the number till where the sum of the series has to be printed");
	scanf("%d", &n);
	series(n);
	return 0;
}
