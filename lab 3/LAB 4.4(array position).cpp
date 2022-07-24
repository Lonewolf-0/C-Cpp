/*Write a Program to print an element from a specified position from an array. 
Array position to be entered by the user.*/

#include<stdio.h>

int main()
{
	int n,i,j;
	
	//input
	printf("\n enter how many elements you want to input : ");
	scanf("%d",&n );
	
	int a[n];
	
	printf("\n enter %d elements of the integer type : ", n);
	for(i=0;i<n;i++)
	{
		printf("\n element %d : ", i+1);
		scanf("%d", &a[i]);
	}
	
	
	//position 
	printf("\n enter the position  : ");
	scanf("%d", &j);
	for(i=0;i<n;i++)
	{
		if(i+1==j)
		{
			printf("\n element at position %d = %d", j ,a[i]);
			break;
		}
		else
		{
			printf("\n this position is not valid .");
			break;
		}
	}
	
	return 0;
}

