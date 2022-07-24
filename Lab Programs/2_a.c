#include <stdio.h>

int main()
{
    /* WAP that finds whether a given number is even or odd using ternary operator */

    int a;
    printf("\n Enter a number ");
    scanf("%d", &a);
    a % 2 == 0 ? printf("Even") : printf("Odd");

    return 0;
}
