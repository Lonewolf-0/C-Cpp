// Develop a program to reverse a number

#include<stdio.h>
#include<string.h>

int main()
{
    char s[50];

    printf("Enter the string : \n");
    gets(s);

    int l, i=0;
    l = strlen(s)-1;

    while(i!=l)
    {
        if(s[i]!= s[l])
        {
            char t = s[i];
            s[i]=s[l];
            s[l]=t;
        
            i++;
            l--;
        }    
    }

    printf("Reversed string is : %s", s);

    return 0;

}