// Develop a program to compare two strings, return 1 if strings are equal otherwise return 0 

#include<stdio.h>
#include<string.h>

int main()
{
    char s[50], a[25];

    printf("Enter two strings : \n");
    fgets(s, 50, stdin);
    fgets(a, 50, stdin);

    int l, i;

    l = strcmp(s, a);

    if(l==0)
    {
        printf("Strings are equal.");
        return 1;
    }

    else
    {
        printf("Strings are not equal.");
        return 0;
    }
}