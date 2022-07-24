/*Mr X basic salary is input through thr keyboard. 
His dearness allowance is 40% of basic salary, and house rent allowance is 20% of the basic salary.
Write a program to calculate the gross salary.*/
#include<stdio.h>
int main()
{
	float bs,da,hra,gs;
	printf("\n enter basic salary");
	scanf("%f", &bs);
	da=(40*bs)/100;
	hra=(20*bs)/100;
	gs=bs+da+hra;
	printf("\n gross salary of Mr X is %f", gs);
	return 0;
	
}
