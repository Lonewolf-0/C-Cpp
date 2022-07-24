/*A farmer wants to fence with 3 rounds of wire in his rectangular plot of length 20m
  and breadth 15m.
  Calculate the total wire to be purchased if the cost per metre of wire is 400Rs.Also
  calculate the total cost of fencing.*/
#include<stdio.h>
int main()
{
	int l=20,b=15,per=0,tot=0,cost=0;
	per=2*(l+b);
	tot=(3*per);
	printf("\n total wire in 'm' to be purchased is %d", tot);
	cost=(400*tot);
	printf("\n total cost in 'Rs' will be %d", cost);
	return 0;
	
	
}
