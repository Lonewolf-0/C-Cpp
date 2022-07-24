#include <stdio.h>

int fib(unsigned int a)
{
    if (a == 0 || a == 1)
        return a;
    else
        return (fib(a - 1) + fib(a - 2));
}

int main()
{
    int i, a, n;
    printf("\n Enter n : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("%d ", fib(i));
    }

    return 0;
}
