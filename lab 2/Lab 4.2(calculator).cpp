//Wap to stimulate the calculator using switch statement and else-if ladder??
#include<stdio.h>
int main()
{
	char Operator;
	float n1, n2, result=0;
	printf("\n enter first number");
	scanf("\n%f", &n1);
	printf("\n enter the operator to be used");
	scanf("\n%c", &Operator);
	printf("\n enter the second number");
	scanf("\n%f", &n2);
	switch(Operator)
	{
		case'+':result=(n1+n2);
		break;
		case'-':result=(n1-n2);
		break;
		case'*':result=(n1*n2);
		break;
		case'/':result=(n1/n2);
		break;
		default:printf("\n you have entered an nvalid operator");
	}
	printf("\n result is %f", result);
	return 0;
}
