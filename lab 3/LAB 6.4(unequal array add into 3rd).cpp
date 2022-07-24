// Wap to find the sum of two unequal size array into third array

#include<stdio.h>

// function prototype
void sum(int [], int [], int , int );

int main()
{
    int n1,n2;
    
    printf(" enter limit for 1st array : ");
    scanf("%d", &n1);

    int a[n1];
    for(int i=0;i<n1;i++)
    {
        printf(" enyter %d element : ", i+1);
        scanf("%d", &a[i]);
    }


    printf("\n\n enter limit for 2nd array : ");
    scanf("%d", &n2);

    int b[n2];
    for(int j=0;j<n2;j++)
    {
        printf(" enter %d element : ", j+1);
        scanf("%d", &b[j]);
    }

    // function call
    sum(a,b,n1,n2);

    return 0;

}


void sum(int a[], int b[], int n1, int n2)

// function definition
{
    int p;
    
    if(n1>n2)
    p=n1;
    else
    p=n2;

    int c[p];
    
    for(int i=0;i<p;i++)
    {
            c[i]=a[i]+b[i];
    }

    // printing
    printf("\n\n 3rd array elements are : ");

    for(int j=0;j<p;j++)
    {
        printf("\n %d", c[j]);
    }  

} 
