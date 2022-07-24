#include <stdio.h>
#include "function.h"
int main()
{   
    // WAP to find whether a number is perfect number or not 

    int n,i,sum=0;
    printf("\n Enter a number ");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        sum=sum+i;

    }
    if(sum==n)
    printf("\n perfect number ");
    else
    printf("\n not perfect number ");
    
    return 0;
}

