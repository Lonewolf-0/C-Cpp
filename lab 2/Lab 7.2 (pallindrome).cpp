//Wap to find whether a given number is pallindrome or not
#include <stdio.h>
int main()
{
    int n,r,a,b=0;
    printf("Enter any number : ");
    scanf("%d",&n);
    a=n;
    while(n!=0)
	{
        r=n%10;
        b=(10*b)+r;
        n=n/10;
    }
        if(a==b)
		{
            
            printf("Number is pallindrome ");
        }
        
        else 
		{
            
            printf("Number is  not pallindrome ");
        }
    return 0;
}
