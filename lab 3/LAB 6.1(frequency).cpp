// Write a program to find frequency of a number from an array.

#include<stdio.h>

//function prototype
void input(int a[] ,int n);
void frequency(int a[], int n);

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
	
    frequency(a,n);	
}

void frequency(int a[], int n)
{
	int f=0,i,num;
	
	printf("\n enter the number for which you want to find it's no. of  occurance : ");
	scanf("%d", &num);
	
	for(i=0;i<n;i++)
	{
		if(a[i]==num)
		{
			f=f+1;
		}

	}
	
	printf("\n frequency of %d is %d ", num,f);
}


