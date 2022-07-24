// Write a program to input n elements in an array and print all the odd position elements.

#include<stdio.h>

//function prototype
void input(int a[] ,int n);
void odd_position(int a[], int n);

int main()
{
	int n;
	
	//inputting limit
	printf("\n enter limit : ");
	scanf("%d", &n);
	
	int a[n];
	
	//function call
	input(a,n);
	return 0;
}

void input(int a[] ,int n)
{
	int i;
	
	//inputting elements
	for(i=0;i<n;i++)
	{
	printf("\n enter %d element :  ", i+1);
	scanf ("%d", &a[i]);
    }
	
    odd_position(a,n);	
}

void odd_position(int a[], int n)
{
	int j;
	printf(" odd position elements are : ");
	for(j=0;j<n;j++)
	{
		if((j+1)%2!=0)
		{
			printf("\n %d", a[j]);
		}
	}
	
}
