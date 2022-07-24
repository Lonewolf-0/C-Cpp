//Wap to find sum and average of ten numbers using for,while,do while loop
#include<stdio.h>
int main()
{
	//using for loop
	int n1,sum1=0,i;
	float avg1=0;
	printf("\n by using FOR loop");
	printf("\n enter the numbers to get some and average : ");
	for(i=1;i<=10;i++)
	{
		scanf("\n%d", &n1);
		sum1=sum1+n1;
    }
    printf("\n sum of ten numbers is %d", sum1);
	avg1=(sum1/10.0);
	printf("\n average of ten numbers is %f", avg1);
	
	//using while loop
	int j,n2,sum2=0;
	float avg2=0;
	printf("\n\n============================================================================================");
	printf("\n\n by using WHILE loop");
	printf("\n enter the numbers to get some and average : ");
	j=1;
	while(j<=10)
	{
		scanf("\n%d", &n2);
		sum2=sum2+n2;
		j++;
	}
	printf("\n sum of ten numbers is %d", sum2);
	avg2=(sum2/10.0);
	printf("\n average of ten numbers is %f", avg2);
	
	//using do....while loop
	int k,n3,sum3=0;
	float avg3=0;
	printf("\n\n============================================================================================");
	printf("\n\n by using DO...WHILE loop");
	printf("\n enter the numbers to get some and average : ");
	k=1;
	do
	{
		scanf("\n%d", &n3);
		sum3=sum3+n3;
		k++;
	}while(k<=10);
	printf("\n sum of ten numbers is %d", sum3);
	avg3=(sum3/10.0);
	printf("\n average of ten numbers is %f", avg3);
	return 0;
}
