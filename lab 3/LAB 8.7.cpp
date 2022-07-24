// Develop a program to count the number of words

#include<stdio.h>
#include<string.h>

int main()
{
    char s[50];

    printf("Enter two strings : \n");
    gets(s);

    int i, count=1;

    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i]==' ')
        {
            count++;
        }

    }

    printf("Number of words are : %d", count); 

    return 0;

}
