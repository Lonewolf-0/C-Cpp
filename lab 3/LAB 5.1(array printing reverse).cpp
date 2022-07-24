//Write a program in c to read n number of values in an array and display it in reverse order.

#include<stdio.h>

//function prototype
void reverse(int *, int );

int main()
{
	int n, i;
	
	//inputting limit
	printf("\n enter limit : ");
	scanf("%d", &n);
	
	int a[n];

	for(i=0;i<n;i++)
	{
	printf("\n enter %d element :  ", i+1);
	scanf ("%d", &a[i]);
    }
	
	//function call
	reverse(a,n);

	return 0;
}



void reverse(int *x, int N)
{
	int j;
	
	//printing in reverse
	for(j=N;j>=0;j--)
	{
		printf("\n element at position %d is %d ",j+1,*(x+j));
	}
}
