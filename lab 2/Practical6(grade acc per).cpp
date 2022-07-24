/*Wap that will display the grades of a student provided his/her percentage in 6 subjects according to the following criteria.
  i)  percentage>80 then grade A
  ii) percentage between 61 and 80 then grade=B
  iii)percentage between 51 and 60 then grade=C
  iv) percentage between 41 and 50 then grade=D
  v)  prcentage between 35 and 40 then grade=E
  vi) percentage<35 then grade=F*/
#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	float tot,per;
	printf("\n enter marks in six subjects");
	scanf("\n%d%d%d%d%d%d", &a,&b,&c,&d,&e,&f);
	tot=(a+b+c+d+e+f);
	per=(tot/6.0);
	printf("\n percentage in six subjects is %f", per);
	if(per>80)
	{
		printf("\n GRADE=A");
	}
	else if((per>61) && (per<=80))
	{
		printf("\n GRADE=B");
	}
	else if((per>51) && (per<=60))
	{
		printf("\n GRADE=C");
	}
	else if((per>41) && (per<=50))
	{
		printf("\n GRADE=D");
	}
	else if((per>=35) && (per<=40))
	{
		printf("\n GRADE=E");
	}
	else if(per<35)
	{
		printf("\n GRADE=F");
	}
	return 0;
}
