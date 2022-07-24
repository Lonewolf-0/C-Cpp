// WAP to find largest and smallest number in a given matrix

#include<stdio.h>

#define row 10
#define col 10

void small_large( int a[row][col], int m , int n);

int main()
{
    
    int a[row][col];
    int r, c;

    printf("enter how many row you want: \n");
    scanf("%d", &r );

    printf("enter how many colmn you want: \n");
    scanf("%d",&c );
    
    printf("enter the matrix: \n");
    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    small_large(a, r, c);

    return 0;

}


void small_large( int a[row][col], int m, int n)
{
    int small, large;
    
    large = a[0][0];
    small = a[0][0];
    
    for(int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] > large)
            {
                large = a[i][j];
            } 

            else if (a[i][j] < small)
            {
                small = a[i][j];
            }    
        }   
    }
    
    printf("largest element : %d\n", large);    
    printf("smallest element : %d", small);            
            
}
