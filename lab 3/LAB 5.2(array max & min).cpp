// Write an array to input n elements in an array and find the maximum and minimum element of the array.

#include<stdio.h>

//function prototype
void input(int a[] ,int n);
void max_min(int a[], int n);

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
	
    max_min(a,n);	
}

void max_min(int a[], int n)
{
	int max,min,j;
	max = a[0];
	min = a[0];
	for(j=0;j<n;j++)
	{
		if(a[j]>max)
		{
			max=a[j];
		}
		
		else if(a[j]<min)
		{
			min=a[j];
		}
	}
	
	printf("\n maximum element is : %d", max);
	printf("\n minimum element is : %d", min);
}
