#include <stdio.h>
void main()
{
    int i, n,m,j;
    printf("Input the number of elements to be stored in the array1 :");
    scanf("%d", &n);
    printf("Input the number of elements to be stored in the array2 :");
    scanf("%d", &m);
    int arr1[n+m],arr2[m];

    printf("Input elements in the array2 ");
    for(j=0;j<m;j++)
    {
	   scanf("%d",&arr2[j]);
    }
    printf("Input elements in the array1 ");
    for(i=0;i<n;i++)
    {
	   scanf("%d",&arr1[i]);
    }

    for( j=0;j<m; j++)
    {
        arr1[i] = arr2[j];              
        i++;
    }
    for(j=0; j<n+m; j++)
    {
        printf("%d ",arr1[j]);
    }
}

