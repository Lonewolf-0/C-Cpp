// WAP to print transpose of a given matrix.

#include<stdio.h>

#define row 10
#define col 10

void transpose( int a[row][col], int m , int n);

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

    
    transpose(a, r, c);

    return 0;

}


void transpose( int a[row][col], int m , int n)
{
    int t;

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<i;j++)
        {
            t = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = t;
        }
    }
    
    printf("transposed matrix \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t", a[i][j]);
        }

        printf("\n");
    }
}