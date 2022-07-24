//Wap to find simple interest if principal amount is less than 10000 else calculate compound interest
#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,t,n,a,x,y,ci,si;
	printf("\n enter principal amount : ");
	scanf("%f", &p);
	printf("\n enter rate : ");
	scanf("%f", &r);
	printf("\n enter time in years : ");
	scanf("%f", &t);
	if(p<10000)
	   {
	   	   si=(p*r*r)/100.0;
	   	   printf("\n\n simple interest is : %f", si);
	   }
	else
	   {
	   	   x=(1+(r/100.0));
	   	   y=pow(x,t);
	   	   a=(p*y);
	   	   ci=(a-p);
	   	   printf("\n\n compound interest is : %f", ci);
	   }   
	return 0;
}
