// Wap to find the sum of two equal size array into third array

#include<stdio.h>

// function prototype
void sum(int a[], int b[], int n1);

int main()
{
    int n;
    
    printf(" enter limit for 2 array : ");
    scanf("%d", &n);


    int a[n];

    printf("\n\n enter the elements for first array : ");
    for(int i=0;i<n;i++)
    {
        printf(" enter %d element : ", i+1);
        scanf("%d", &a[i]);
    }


    int b[n];

    printf("\n\n enter the elements for first array : ");
    for(int j=0;j<n;j++)
    {
        printf(" enyter %d element : ", j+1);
        scanf("%d", &b[j]);
    }

    // function call
    sum(a,b,n);

    return 0;

}

void sum(int a[], int b[], int n)

// function definition
{
    int c[n];
    
    printf("\n\n 3rd array elements are : ");
    for(int i=0;i<n;i++)
    {
        c[i]=a[i]+b[i];

        // printing
        printf("\n %d", c[i]);
    }

}