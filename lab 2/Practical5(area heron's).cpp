//Area of valid triangle using heron's formula.
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,s=0,p,q,r,area=0;
	printf("\n enter three sides");
	scanf("\n%f%f%f", &a,&b,&c);
	s=(a+b+c)/2;
	p=a+b;
	q=b+c;
	r=c+a;
	if((p>c) && (q>a) && (r>b))
	{
		area=sqrt(s*(s-a)*(s-b)*(s-c));
		printf("\n area of triangle is %f", area);
	}
	else
	{
		printf("\n invalid triangle");
	}
	return 0;
}
