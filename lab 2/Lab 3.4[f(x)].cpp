/*The following calculates the value of f(x) if x has different ranges of value as below
f(x)=pow(x,2)+2              if 0<=x<=10
f(x)=pow(x,2)+2x             if 11<=x<=20
f(x)=pow(x,3)+2*pow(x,2)     if 21<=x<=30
f(x)=0                       if x>30*/
#include<stdio.h>
#include<math.h>
int main()
{
	int x,f;
	printf("\n enter the value of x");
	scanf("\n%d", &x);
	if(x>=0 && x<=10)
	{
		f=pow(x,2)+2;
    }
    else if(x>=11 && x<=20)
    {
    	f=pow(x,2)+(2*x);
	}
	else if(x>=21 && x<=30)
	{
		f=pow(x,3)+(2*pow(x,2));
	}
	else if(x>30)
	{
		f=0;
	}
	printf("\n value of the function f(x) is %d", f);
	return 0;
}
