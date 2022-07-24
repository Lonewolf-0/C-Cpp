#include <stdio.h>
#include "function.h"
int main()
{
    // WAP to print the series 1!+2!+3!+............+n!
    int i,n,sum=0;
    printf("\n Enter n ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum += factorial(i);
    }
    printf("Sum of series is %d",sum);
    return 0;
}

