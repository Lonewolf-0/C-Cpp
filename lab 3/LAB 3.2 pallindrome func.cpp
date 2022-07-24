/*Write a program to check whether the given number is palindrome or not using function. 
 If the number is palindrome function should return 1 else 0. */
#include <stdio.h>

int pal (int, int);

int main ()
{
    int n;
    int temp;

    printf("Enter an integer: ");
    scanf("%d", &n);

    temp = n;

    short  r = pal(n, temp);

    if (r == 1)
        printf("\n%d is a NUMERIC PALINDROME.\n", temp);

    else
        printf("\n%d is NOT a numeric palindrome.\n", temp);

}

int pal (int n, int temp)
{
   int rev = 0;

   while (n > 0)
    {
        rev = (10 * rev) + (n % 10);
        n = n / 10;
    }

    if (rev == temp)
        return 1;

    else
        return 0;
}


