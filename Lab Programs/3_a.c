#include <stdio.h>

int main()
{
    /* WAP to find the greatest of three numbers using nested if else */
    int a, b, c;
    printf("\n Enter 3 numbers ");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b && a > c)
        printf("\n %d is greatest ", a);
    else if (b > c && b > a)
        printf("\n %d is greatest ", b);
    else
        printf("\n %d is greatest ", c);

    return 0;
}
