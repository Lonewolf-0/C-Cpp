// Wap to delete an element from a particular position in an array
#include<stdio.h>

// prototype
int deletion(int[], int);

int main()
{

    int n,i;
    printf("\n enter limit for array : ");
    scanf("%d", &n);

    int a[n];
    // input
    for(i=0; i<n; i++)
    {
       printf(" enter %d element : ", i+1);
       scanf("%d", &a[i]);
    } 

    // calling
    a[n-1]=deletion(a,n);

    printf("\n array elements after deletion are : ");
    for (i = 0; i < n-1; i++)
    {
        printf("\t%d", a[i]);
    }
    
    return 0;

}

int deletion(int a[], int n)
{
    int pos,i;

    printf("\n\n enter the position where u want to delete the new element : ");
    scanf("%d", &pos);
    pos=pos-1;
    
    for(i=pos; i<n-1; i++)
    {
        a[i]=a[i+1];
    }

    return a[n-1];

}