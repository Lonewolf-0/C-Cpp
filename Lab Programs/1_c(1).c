#include <stdio.h>

int main()
{
    /* WAP that swaps values of two variables using a third variable and without using a third variable */

    // using third variable
    int a, b, t;
    printf("\n enter first number ");
    scanf("%d", &a);
    printf("\n enter second number ");
    scanf("%d", &b);
    t = a;
    a = b;
    b = t;
    printf("\n first number becomes %d", a);
    printf("\n second number becomes %d", b);

    

    return 0;
}
