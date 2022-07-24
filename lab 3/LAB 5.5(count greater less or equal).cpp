// Write a program to count numbers greater than, less than or equal to a number k

#include<stdio.h>

//function prototype
void input(int a[] ,int n);
void count(int a[], int n);

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
	
    count(a,n);	
}

void count(int a[], int n)
{
	int j,k,greater=0,less=0,equal=0;
	
	printf("\n enter the number 'K' from array : ");
	scanf("%d", &k);
	
	for(j=0;j<n;j++)
	{
		if(a[j]>k)
		{
		    greater=greater+1;
		}
		
		else if(a[j]<k)
		{
			less=less+1;
		}
		
		else if(a[j]==k)
		{
			equal=equal+1;
		}
		
	
	}
	
	printf("\n Numbers greater than 'K' are %d", greater);
	printf("\n Numbers less than 'K' are %d", less);
	printf("\n Numbers eequal to 'K' are %d", equal);
	
}
