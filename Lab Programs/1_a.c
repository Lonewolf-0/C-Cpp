#include <stdio.h>

int main()
{
    /* WAP that accepts the mark of 5 subjects and find the sum obtained by the student */

    int m1, m2, m3, m4, m5;

    float percentage, sum;
    printf("\n Enter marks of 1st subject : ");
    scanf("%d", &m1);
    printf("\n Enter marks of 2nd subject : ");
    scanf("%d", &m2);
    printf("\n Enter marks of 3rd subject : ");
    scanf("%d", &m3);
    printf("\n Enter marks of 4th subject : ");
    scanf("%d", &m4);
    printf("\n Enter marks of 5th subject : ");
    scanf("%d", &m5);

    sum = m1 + m2 + m3 + m4 + m5;
    percentage = sum / 5;
    printf("\n Total Marks = %.f", sum);
    printf("\n percentage = %f", percentage);
    return 0;
}
