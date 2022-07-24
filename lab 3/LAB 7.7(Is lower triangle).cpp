/*  WAP to check whether the given matrix is lower triangular or not
    ( lower triangular matrix is one in which all the elements above its principal diagonal are 0.) */

#include<stdio.h>

#define row 10
#define col 10

void lower_triangle( int a[row][col], int m , int n);

int main()
{
    
    int a[row][col];
    int r, c;

    printf("enter how many row you want: \n");
    scanf("%d", &r );

    printf("enter how many colmn you want: \n");
    scanf("%d",&c );
    
    printf("enter the elements of matrix: \n");
    
    // input
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    // print
    printf("your inputted matrix is : \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    
    lower_triangle(a, r, c);

    return 0;

}  


void lower_triangle( int a[row][col], int m , int n)
{
    int ISlower = 1; 

    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            if ( j  > i)    
                if( a[i][j] != 0 )
                    ISlower = 0; 


    if ( ISlower == 1)
        printf("\nMatrix is lower triangle.");
    else
        printf("\nMatrix is not lower triangle."); 

}