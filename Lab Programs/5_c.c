#include <stdio.h>
#include "function.h"
int pal(int);
int main()
{   int n;

    // wap a program to take input of 3 digit number and check whether 
    // it is an armstrong and palindrome or not 

    printf("\n Enter 3 digit number ");
    scanf(" %d",&n);
    if (armstrong(n))
    printf("\n Number is armstrong ");
    else
        if(pal(n))
        printf("\n Number is palindrome ");
        else
        printf("\n Number is not armstrong and palindrome ");
        
    
    
    return 0;
}

int pal( int n)
{
    int last; 
    last=n%10;
    int first;
    first=n/100;
    if(first == last )
    return 1;
    else 
    return 0;
}
