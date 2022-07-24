/*Write a C Program to find an element in an array. 
Element to be find and array is to be inputted by the user.*/

#include<stdio.h>

int main()
{
	int n,i,num,found;
	
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
	
	
	//searching
	printf("\n enter that element which you want to find : ");
	scanf("%d", &num);
	for(i=0;i<n;i++)
	{
		if(a[i]==num)
		{
			found=1;
			break;
		}
		
    }
    
    if(found==1)
        {
            printf("\n element found at %d position ", i+1);
        }
    else 
		{
			printf("\n element not found");
		}
    
	return 0;
}
