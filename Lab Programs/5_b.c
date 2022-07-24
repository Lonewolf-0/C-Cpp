#include <stdio.h>

int main()
{
    // WAP to find if a number is prime or not
    int a, n, i, s = 0;
    printf("\n Enter a number ");
    scanf("%d", &a);
    for (i = 2; i <= a / 2; i++)
    {
        if (a % i == 0)
            s = s + 1;
    }
    if (s)
        printf("\n not prime");
    else
        printf("\n prime");

    return 0;
}
