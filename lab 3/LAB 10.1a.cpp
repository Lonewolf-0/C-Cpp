/* Write a program to create a file with three paragraphs.
Display it's contents and count of numbers of consonants and vowles.*/ 
#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr;
    int ch, i, countv=0, countc=0;

    fptr=fopen("vowle_consonants.txt", "r");

    if(fptr==NULL)
    {
        printf("error in file open.\n");
        exit(1);
    }

    while ((ch=fgetc(fptr))!=EOF)
    {
        putchar(ch);
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
            countv++;
        else 
            countc++;    
        
    }
    

    printf("count of vowels is : %d\ncount of consonants is : %d", countv, countc);

    fclose(fptr);

    return 0;

}