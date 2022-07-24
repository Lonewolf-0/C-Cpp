//Write a C program to input 5 elements in an array and print them.

#include<stdio.h>

int main()
{
	int a[5],i;
	
	//input
	printf("\n enter 5 elements of the integer type : ");
	for(i=0;i<5;i++)
	{
		printf("\n element %d : ", i+1);
		scanf("%d", &a[i]);
	}
	
	//printing
	printf("\n 5 elements which you entered are : ");
	for(i=0;i<5;i++)
	{
		printf("%d  ", a[i]);
	}
	
	return 0;
	
}
