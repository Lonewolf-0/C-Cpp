// WAP to print sum of diagonal elements of a given matrix

#include<stdio.h>

#define row 10
#define col 10


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

    int sum = 0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if( i == j)
            {
                sum = sum + a[i][j];
            }
        }
    }
    printf("\nsum of the diagonal elements : %d", sum);

    return 0;

}
