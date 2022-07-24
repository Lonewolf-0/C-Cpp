/*Write a program to create a file and copy it's contents to another file
such that there is no space in the copied file.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr, *ffptr;
    char str[1000], sstr[1000],c;
    int i, k=0;
    
    
    // Read file
    fptr=fopen("Read.txt", "r");

    if(fptr==NULL)
    {
        printf("error in file open.\n");
        exit(1);
    }
            
    fscanf(fptr, "%s", str);
    

    // Write file
    ffptr=fopen("Write.txt", "w");
    if(ffptr==NULL)
    {
        printf("error in file open.\n");
        exit(1);
    }

   c = fgetc(fptr);
    while (c != EOF)
    {
        if(c==' ')
        continue;
        fputc(c, ffptr);
        c = fgetc(fptr);
    }
  
        
    
    
    fclose(fptr);
    fclose(ffptr);

    return 0;
}   