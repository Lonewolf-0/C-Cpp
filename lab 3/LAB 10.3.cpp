// Write a program to read a file, encrypt it's content and copy to another file. 

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr1, *fptr2;
    char c;
  
    // Open one file for reading
    fptr1 = fopen("Read.txt", "r");
    if (fptr1 == NULL)
    {
        printf("Cannot open file \n");
        exit(1);
    }
  
    // Open another file for writing
    fptr2 = fopen("EncryptWrite.txt", "w");
    if (fptr2 == NULL)
    {
        printf("Cannot open file \n");
        exit(1);
    }
  
    // Read contents from file
    c = fgetc(fptr1);
    while (c != EOF)
    {
        if(c!=' ')
        {
            c=c+3;
            fputc(c, fptr2);
        }    
        c = fgetc(fptr1);
    }
  
    printf("\nContents copied");
  
    fclose(fptr1);
    fclose(fptr2);
    return 0;
}        