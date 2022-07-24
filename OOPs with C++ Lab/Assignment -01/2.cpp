/* 2. Write a program in C to count a total number of duplicate elements in an
array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 5
element - 1 : 1
element - 2 : 1
Expected Output :
Total number of duplicate elements found in the array is : 1 */

#include<stdio.h>
int main()
{
    int n, i, j, count, count_digit=0;
    printf("Input the number of elements to store in the array : ");
    scanf("%d", &n);

    int arr[n];
    
    printf("Input 3 number of elements in the array :\n");
    for(i=0; i<n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }


    for(i=0; i<n; i++)
    {
        count=0;

        for(j=i; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }

        if(count>1)
        {
            count_digit++;
        }
    }

    printf("Total number of duplicate elements found in the array is : %d", count_digit);

    return 0;
    
}