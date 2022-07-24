#include <stdio.h>

int main()
{
    /*basic salary of an employee is input through the keyboard. the DA is 25% of basic salary
    15% HRA , 10% PF is deducted . WAP to calculate Net salary */

    float basic, net, da, hra, pf;

    printf("\n Enter basic salary ");
    scanf("%f", &basic);
    da = 0.25 * basic;
    hra = 0.15 * basic;
    pf = 0.1 * (basic + hra + da);
    net = basic + da + hra - pf;
    printf("\n Net salary is %f ", net);

    return 0;
}
