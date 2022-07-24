/*Wap to compute net salary.
  (ns=bp+hra+ta+da)
  where bp(basic pay would be entered by the user)
  hra = 10% of the bp
  ta = 5% of the bp
  da = 15% of the bp
*/  
#include<stdio.h>
int main()
{
	float bp,hra,ta,da,ns;
	printf("\n enter the basic pay ");
	scanf("%f", &bp);
	hra=(10*bp)/100;
	ta=(5*bp)/100;
	da=(15*bp)/100;
	ns=bp+hra+ta+da;
	printf("\n net salary is %f", ns);
	return 0;
	
}


