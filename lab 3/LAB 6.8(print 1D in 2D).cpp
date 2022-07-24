/* Wap to print the following output using 1D array.
    
   1 2 3 
   4 5 6 
   7 8 9 */

#include<stdio.h>

int main()
{
    int i, a[9]={1,2,3,4,5,6,7,8,9,};

    for(i=0; i<9; i++)
    {
        if(i%3 == 0)
        printf("\n%d", a[i]);

        else 
        printf("\t%d", a[i]);
    }
}