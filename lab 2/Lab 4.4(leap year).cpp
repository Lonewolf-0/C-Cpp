//Wap to check whether an inputted year is leap year or not?
#include<stdio.h>
int main()
{
	int y;
	printf("\n enter an year");
	scanf("\n%d", &y);
	if(y%400==0)
	{
		printf("\n leap year");
	}
	else 
	{
	   ((y%100!=0) && (y%4==0))? printf("\n leap year"):printf("\n not a leap year");
    }
	return 0;
}
