// Write a program to merge two unequal size of array into a single array.

#include<stdio.h>

//function prototype
void merge(int a[] ,int b[], int n1, int n2);

int main()
{
	
	//inputting elements in 1st array
	int n1,i;

	printf("\n enter limit for 1st array : ");
	scanf("%d", &n1);
	
	int a[n1];

	for(i=0;i<n1;i++)
	{
	printf("\n enter %d element for array 1st :  ", i+1);
	scanf("%d", &a[i]);
    }
    
    printf("\n-----------------------------------------------------------------------------------------------------------------------------------------\n");
    
    //inputting elements in 1st array
	int n2,j;

	printf("\n enter limit for 2st array : ");
	scanf("%d", &n2);
	
	int b[n2];

	for(j=0;j<n2;j++)
	{
	printf("\n enter %d element for array 1st :  ", j+1);
	scanf("%d", &b[j]);
    }
    
	
	//function call
    merge(a,b,n1,n2);

	return 0;
	
}


void merge(int a[] ,int b[], int n1, int n2)
{
	int n3,i,j;
	
	n3=n1+n2;
	
	int c[n3];

	for(i=0;i<n1; i++)
  	{
      	c[i] = a[i];
  	}
  	
 	for(i=0,j=n1;  i<n2 && j<n3  ; i++,j++)
  	{
  		c[j] = b[i];
  	}
 
    printf("\n-----------------------------------------------------------------------------------------------------------------------------------------\n");
	 
 	printf("\n  Array Elements After Merging \n\n"); 
 	for(i = 0; i < n3; i++)
  	{
    	printf(" %d\t ",c[i]);
  	}
	
	
	
}
