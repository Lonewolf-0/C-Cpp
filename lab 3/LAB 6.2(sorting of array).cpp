// Wap to perform sorting in an array

#include<stdio.h>

// prototype
int sort(int[], int);

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
   a[n]=sort(a,n);

   //printing
   printf("\n\n new array is : ");
   for (int i = 0; i < n; i++)
   {
       printf("%d\t", a[i]);
   }

    return 0;

}

int sort(int a[], int n)
{
    int t,i,j;

    for( i=0; i<n; i++)
    {
        for ( j = i+1; j < n; j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }

    }
     
    return a[n];

}