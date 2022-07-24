#include <stdio.h>
#include <math.h>
#include <process.h>
int main()
{
    /* WAP to determine roots of a quadratic equation */
    float a, b, c,d,e,x1,x2;
    printf("\n Enter a,b,c of quadratic equation ");
    scanf("%f%f%f", &a, &b, &c);
    d=b*b-4*a*c;
    if(d<0)
    {printf("roots are imaginary ");
        exit(0);}
    e=pow(d,0.5);
    x1=(-b+e)/2*a;
    x2=(-b-e)/2*a;
    printf("\n Roots of equation are %f %f",x1,x2);



        return 0;
}
