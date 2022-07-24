#include<stdio.h>

void hello()
{
    printf("Hello welcome to C");
}

int factorial(int a)
{
    if(a==0||a==1)
        return 1;
    else
        return(a*factorial(a-1));
}