#include <stdio.h>

int main()
{
    /*WAP to find value of y for a particular value of n . The a,x,b,n is input by user
    if n=1, y=ax%b
    if n=2, y=ax^2+b^2
    if n=3 y=a-bx
    if n=4 y=a+x/b
    */
    int a, b, x, n;
    float y;
    printf("\n Enter value of a");
    scanf("%d", &a);
    printf("\n Enter value of b");
    scanf("%d", &b);
    printf("\n Enter value of x");
    scanf("%d", &x);
    printf("\n Enter value of n");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        y = (a * x) % b;
        break;
    case 2:
        y = a * x * x + b * b;
        break;
    case 3:
        y = a - b * x;
        break;
    case 4:
        y = (a + x) / b;
        break;
    default:
        printf("\n Invalid value of n ");
        break;
    }
    printf("\n value of y = %d", y);

    return 0;
}
