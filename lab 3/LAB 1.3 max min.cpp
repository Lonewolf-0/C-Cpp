/*Write a program to enter the numbers till the user wants and at the end the program should display the largest and smallest numbers entered.*/

#include <stdio.h>

int main()
{
    int n;
    printf("\n enter how many numbers you want to input : ");
    scanf("%d", &n);
  
    char ch;
    int a[n],l,s;
    //input
    for(int i=0;i<n;i++)
    {
    	printf("\n enter the number : ");
    	scanf("%d", &a[i]);
    	{
    		l=a[0];
    		s=a[0];
    		if(a[i]>l)
    		{
    			s=l;
    			l=a[i];
			}
			else if(a[i]<s)
			{
				l=s;
				s=a[i];
			}
		}
		
    }
    
    printf("\n the largest and smallest numbers are %d and %d respectively.", l,s); 
    
    return 0;
}

