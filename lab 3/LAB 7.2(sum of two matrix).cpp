// WAP to find sum of two matrix.

#include<stdio.h>

#define row 10
#define col 10

void sum( int a[row][col], int b[row][col], int m , int n);

int main()
{
    
    int a[row][col];
    int b[row][col];
    int r, c;

    printf("enter how many row you want: \n");
    scanf("%d", &r );

    printf("enter how many colmn you want: \n");
    scanf("%d",&c );
    
    printf("enter the elements of first matrix: \n");
    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("enter the elements of second matrix: \n");
    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }


    // print
    printf("your inputted first matrix is : \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("\nyour inputted first matrix is : \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }


    sum(a, b, r, c);

    return 0;

}


void sum( int a[row][col], int b[row][col], int m , int n)
{
    int sum[row][col]= {0};

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            sum[i][j] =  a[i][j] + b[i][j];
        }
    }

    printf("\n sum of two matrix is : \n");
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t", sum[i][j]);
        }

        printf("\n");
    }
}