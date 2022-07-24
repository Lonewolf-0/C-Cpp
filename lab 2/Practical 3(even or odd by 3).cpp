/*Wap to check whether a given number is even or odd by three diffrent methods
  i)   by using if-else
  ii)  by using switch statement
  iii) by using conditional/ternary operator*/
#include<stdio.h>
int main()
{
	//using if else
	int a;
	printf("\n enter a number:");
	scanf("\n%d", &a);
	if(a%2==0)
	{
		printf("\n number is even");
	}
	else
	{
		printf("\n number is odd");
	}
	
	//using switch case
	int b,r;
	printf("\n enter a number:");
	scanf("\n%d", &b);
	r=(b%2);
	switch(r)
	{
		case(0):printf("\n number is even");
		        break;
		case(1):printf("\n number is odd");
		        break;
		default:printf("\n invalid");        
	}
	
	//using conditional/ternary operator
    int c;
    printf("\n Enter a number:");
    scanf("%d", &c);
    (c%2 == 0)? printf("\n number is even") : printf("\n number is odd");
    return 0;

}
