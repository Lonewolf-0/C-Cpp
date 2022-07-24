#include <stdio.h>
#include "function.h"
int main()
{       // WAP to draw the following figure 
    int i,j;
    for(i=3;i>0;i--)
    {
        for(j=i;j>0;j--)
        {   
            printf("%d ",j);
        }
        printf(" ");
        
    }
    return 0;
}

