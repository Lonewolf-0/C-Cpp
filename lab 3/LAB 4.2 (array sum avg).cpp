 //Write a C Program to Calculate Sum and Average of an Array.
 
#include<stdio.h>

int main()
{
	int n,i,sum=0;
	float avg=0;
	
	//input
	printf("\n enter how many elements you want to input : ");
	scanf("%d",&n );
	
	int a[n];
	
	printf("\n enter %d elements of the integer type : ", n);
	for(i=0;i<n;i++)
	{
		printf("\n element %d : ", i+1);
		scanf("%d", &a[i]);
		sum+=a[i];
	}
	
	avg=sum/n;	
	
	//print of sum and average
	printf("\n Sum of the all elements of this array = %d", sum);
	printf("\n\ Average of the all elements of this array = %d", avg);
	

	
}
