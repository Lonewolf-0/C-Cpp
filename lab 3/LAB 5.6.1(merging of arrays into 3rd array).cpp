// ,erge two arrays into a 3rd array

#include <stdio.h>
void main()
{
    int arr1[100], arr2[100],arr3[200];
    int i, n,m,j;
    printf("Input the number of elements to be stored in the array1 :");
    scanf("%d",&n);
    printf("Input elements in the array1 ");
    for(i=0;i<n;i++)
    {
	   scanf("%d",&arr1[i]);
	}
   printf("Input the number of elements to be stored in the array2 :");
    scanf("%d",&m);
    printf("Input elements in the array2 ");
    for(i=0;i<m;i++)
    {
	   scanf("%d",&arr2[i]);
    }
   for(i=0; i<n; i++)
    {
        arr3[i] = arr1[i];
    }   
    for(j=0; j<m; j++)
    {
         arr3[i] = arr2[j];

        printf("\n %d", i);
         i++;
    } 
    
    for(j=0; j<n+m; j++)
    {
        printf("%d ",arr3[j]) ;
    }
}

