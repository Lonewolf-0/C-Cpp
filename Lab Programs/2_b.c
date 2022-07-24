#include <stdio.h>

int main()
{
    /* WAP that tells whether a given year is leap year or not */

    int a;
    printf("\n Enter year ");
    scanf("%d", &a);
    if (a % 4 == 0)
        printf("\n Leap year ");
    else
        printf("\n Not a Leap year");

    return 0;
}
