/*In a town, the percentage of men is 52. The percentage of total literacy is 48.
If total percentage of literate men is 35 of the total population,
Wap to find total number of illiterate men and women if the population of the town is 80,000.*/ 
#include<stdio.h>
int main()
{
	int m,w,lm,ilm,lw,ilw,t=80000;
	printf("\n total population : %d", t);
	m=(52*t)/100;
	printf("\n total number of men : %d", m);
	w=(t-m);
	printf("\n total number of women : %d", w);
	lm=(35*t)/100;
	ilm=(m-lm);
	printf("\n total number of illiterate men : %d", ilm);
	lw=(13*t)/100;
	ilw=(w-ilw);
	printf("\n total number of illiterate women : %d", ilw);
	return 0;	
	
}

