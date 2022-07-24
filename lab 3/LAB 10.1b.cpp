//write s program to create a file with three paragraphs.
//display its contents and count the number of vowels and consonants

#include <stdio.h>
#include<stdlib.h>

int main()
{

    FILE *fptr;
    int ch, countv = 0, countc = 0;

    fptr=fopen("hello.txt", "w+");

    if(fptr==NULL)
    {
        printf("error in file open.\n");
        exit(1);
    }

    printf("enter on the blank line : \n");

    while((ch = getchar()) != EOF)
    {
        fputc(ch,fptr) ;
    }

    fclose(fptr) ;


    fptr = fopen("hello.txt","r") ;

    while((ch  = fgetc(fptr)) != EOF)
        putchar(ch) ;

    rewind(fptr) ;


    while((ch = fgetc(fptr)) != EOF)
    {
        if ((ch>= 'A' && ch<='Z')|| (ch>= 'a' && ch<'z'))
        {

            if((ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') || (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'))
            {
                countv ++ ;
            }
            else
            {
                countc ++ ;
            }

        }
    }


    printf("\n\no of vowels --%d\n\n",countv) ;
    printf("\n\no of consonants --%d\n\n",countc) ;

    return 0;

}