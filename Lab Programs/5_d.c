#include <stdio.h>
#include "function.h"
#include <math.h>

int main()
{
    /* WAP to find sum of the following series 
    1-X^1/1!+X^2/2!...........  */

    int x,n;
    int i;
    float sum=1;
    printf("enter x,n ");
    scanf("%d%d",&x,&n);
    for( i=1;i<n;i++)
    {
        sum=sum+pow(-1,i)*pow(x,i)/factorial(i);

    }
    printf("\n Sum of series is %f",sum);
    return 0;
}
