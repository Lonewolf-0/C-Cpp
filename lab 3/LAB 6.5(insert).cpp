
// Wap to insert an element in an array at first, last and a particular position in an array

#include<stdio.h>

// prototype
int insert(int[], int);

int main()
{
   int n;
   printf("\n enter limit for array : ");
   scanf("%d", &n);

   int a[n];
   // input
   for(int i=0; i<n; i++)
   {
       printf(" enter %d element : ", i+1);
       scanf("%d", &a[i]);
   } 

   // calling
   a[n+1]=insert(a,n);

   //printing
   printf("\n\n new array is : ");
   for (int i = 0; i < n+1; i++)
   {
       printf("%d\t", a[i]);
   }

    return 0;

}

int insert(int a[], int n)
{
    int pos,num;

    printf("\n\n enter the position where u want to insert the new element : ");
    scanf("%d", &pos);
    
    printf("\n enter the element which has to be inserted : ");
    scanf("%d", &num);

    for(int i=n; i>=pos; i--)
    {
        a[i]=a[i-1];
    }

    a[pos-1]=num;
     
    return a[n+1];

}