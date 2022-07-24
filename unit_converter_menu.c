#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include<process.h>

int main()
{
    float a, b;
    char c;
    float input, result;

    int i = 0, j, k, n;

    do
    {

        printf("\n Enter your choice:-");
        printf("\n (1) Kilometers to Miles ");
        printf("\n (2) Inches to Foot ");
        printf("\n (3) Centimeters to Inches ");
        printf("\n (4) Pounds to Kilograms ");
        printf("\n (5) Inches to Meters");
        printf("\n\n Enter 0 to quit\n\n");
        scanf(" %d", &i);

        switch (i)
        {

        case 0:
            exit(0);
        case 1:
            printf("\n Enter kilometres : ");
            scanf("%f", &input);
            result = 1.6 * input;
            printf("%f kilometers in miles are %f ", input, result);
            break;
        case 2:
            printf("\n Enter inches : ");
            scanf("%f", &input);
            result = input / 12;
            printf("\n %f inches in foot are %f ", input, result);
            break;
        case 3:
            printf("\n Enter centimeters : ");
            scanf("%f", &input);
            result = input / 2.54;
            printf("\n %f centimeters in inches are %f ", input, result);
            break;
        case 4:
            printf("\n Enter Pounds : ");
            scanf("%f", &input);
            result = input / 2.205;
            printf("\n %f pounds in kilograms are %f ", input, result);
            break;
        case 5:
            printf("\n Enter Inches : ");
            scanf("%f", &input);
            result = input / 39.37;
            printf("\n %f inches in meters are %f ", input, result);
            break;

        default:
            printf("\n Wrong Choice ");
            break;
        }
        printf("\n\n Do you want to run the program again (y/n)");
        scanf("%s",&c);


    } while (c=='y'||c=='Y');

    return 0;
}
