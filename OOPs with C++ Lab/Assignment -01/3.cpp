/* 3 Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5
using the function.
Expected Output :
The sum of the series is : 34 */

#include<stdio.h>
int factorial(int n);
int main()
{
    int n, sum=0, i, fact;
    printf("enter last term : ");
    scanf("%d", &n);

    i=1;
    while(i<=n)
    {
        fact = factorial(i);
        sum += fact/i;
        i++;
    }

    printf("The sum of the series is : %d", sum);

}

int factorial ( int n)
{
    if(n==1)
    {
        return 1;
    }

    else
    {
        return (n*factorial(n-1));
    }
}