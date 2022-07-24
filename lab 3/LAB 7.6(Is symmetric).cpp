//  WAP to check whether the given matrix is symmetric or not.

#include<stdio.h>

#define row 10
#define col 10

// function prototype
void transpose( int a[row][col], int m , int n);
void copyy( int a[row][col], int copy[row][col], int m, int n);
void check_transpose( int a[row][col], int copy[row][col], int m , int n);

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

    
    // function call
    transpose(a, r, c);

    return 0;

}


void transpose( int a[row][col], int m , int n)
{
    int copy[row][col];
    // function call
    copyy(a, copy, m, n);
 
    int t;
   
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<i;j++)
        {
            t = copy[i][j];
            copy[i][j] = copy[j][i];
            copy[j][i] = t;
        }
    }
    
    printf("transposed matrix \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t", copy[i][j]);
        }
        printf("\n");
    }
    
    if ( m == n)
        check_transpose( a, copy, m , n);
    else
        printf("\nMatrix is not symmetric");
    
}    


void copyy( int a[row][col], int copy[row][col], int m, int n)
{
    for ( int i = 0; i<m; i++)
    {
        for( int j = 0; j<n ; j++)
        {
            copy[i][j] = a[i][j];
        }
    }
}


void check_transpose( int a[row][col], int copy[row][col], int m , int n)
// function definition
{
    int ISsymmetric = 1;
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if (copy[i][j]!=a[i][j])
            {
                ISsymmetric = 0;
                break;
            }     
        }           
    }

    if (ISsymmetric == 1)
        printf("\nMatrix is symmetric");
    else if (ISsymmetric == 0)
        printf("\nMatrix is not symmetric");

    

}