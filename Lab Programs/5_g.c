#include <stdio.h>
#include "function.h"
int main()
{   //WAP to find sum of digits of natural numbers

    int i,n,sum=0;
    printf("\n Enter n ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum += i;
    }
    printf("Sum of numbers upto n is %d",sum);
    return 0;
}

