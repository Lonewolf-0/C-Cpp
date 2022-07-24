/*Wap to swap two numbers
  i)  by taking input from user
  ii) without taking input from the user
*/
#include<stdio.h>
int main()
{
	//swapping by taking input from the user
	int a,b,t;
	printf("\n enter first number"); 
	scanf("%d", &a);
	printf("\n enter second number");
	scanf("%d", &b);
	t=a;
	a=b;
	b=t;
	printf("\n first number becomes %d", a);
	printf("\n second number becomes %d", b);
	
	
	//swapping without taking input from the user
    int c=10,d=20;
	printf("\n two numbers are %d,%d", c,d);
	c=c+d;
	d=c-d;
	c=c-d;
	printf("\n now the two numbers become %d,%d", c,d);
	return 0;	
	
}
  
