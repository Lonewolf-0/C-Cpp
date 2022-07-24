// Develop a program to copy a string into another without using the strcpy function.

#include<stdio.h>

int main()
{
    char s[50], a[50];
    
    char *sptr, *aptr;
    
    sptr=s;
    aptr=a;

    printf("\nEnter a string : ");
    fgets(s, 50, stdin);

    while(*sptr!='\0')
    {
        *aptr=*sptr;
        sptr++;
        aptr++;
    }

    *aptr = '\0';

    printf("\nCopied string is : %s", a);

    return 0;

}