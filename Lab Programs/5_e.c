#include <stdio.h>
#include "function.h"
int main()
{
    //WAP to print prime numbers from 1-300
    int i;
    for(i=2;i<=300;i++)
    {
        if(prime(i))
        printf("%d, ",i);
    }
    
    return 0;
}

