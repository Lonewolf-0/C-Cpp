#include <stdio.h>

int main()
{
    int p, c, m;
    printf("\n Enter marks of physics ");
    scanf("%d", &p);
    printf("\n Enter marks of chemistry ");
    scanf("%d", &c);
    printf("\n Enter marks of maths ");
    scanf("%d", &m);
    if (p > 40 && c > 50 && m > 60 && ((p + m) > 150 || (p + c + m) > 200))
        printf("\n Eligible for course ");
    else
        printf("\n Not Eligible for course ");
    return 0;
}
