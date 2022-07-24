#include <stdio.h>

int main()
{

/* WAP that swaps values of two variables using a third variable and without using a third variable */
// without using third variable
    int x, y;
    printf("\n enter first number ");
    scanf("%d", &x);
    printf("\n enter second number ");
    scanf("%d", &y);
    x = x + y;
    y = x - y;
    x = x - y;
    printf("\n first number becomes %d", x);
    printf("\n second number becomes %d", y);

    return 0;

}