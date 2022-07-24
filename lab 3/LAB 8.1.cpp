// Develop a program to count the number of characters in a string

#include<stdio.h>
#include<string.h>

int main()
{
    char s[30];

    printf("Enter string  : ");
    gets(s);            

    int l=strlen(s);
    printf("\nNumber of characters in the string is : %d ", l);

    return 0;
}

//fgets is counting '\n' as a character hence printing the length one more than the actual length.