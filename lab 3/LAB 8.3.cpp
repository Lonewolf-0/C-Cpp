// Develop a program to vconcatenate two strings '

#include<stdio.h>
#include<string.h>

int main()
{
    char s[50], a[25];

    printf("Enter two strings : \n");
    gets(s);
    gets(a);

    int l, i;

    l = strlen(s);

    for(i=0; a[i]!='\0'; i++)
    {
        s[i+l]=a[i];
    }

    s[i+l]='\0';

    printf("String after concatenation is : %s", s); 

    return 0;

}

// fgets will concatenate the strings but it will give the next string on the next line