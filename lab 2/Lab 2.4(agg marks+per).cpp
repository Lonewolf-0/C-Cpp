/*If the marks obtained by a student in five different subjects
are input through the keyboard, find out the aggregate marks and percentage marks obtained by the student .
Assume that the maximum marks that can be obtained by a student in each subject is 100.*/
#include<stdio.h>
int main()
{
	int a,b,c,d,e,agg,per;
	printf("\n enter marks in five subjects");
	scanf("\n %d%d%d%d%d", &a,&b,&c,&d,&e);
	agg=(a+b+c+d+e);
	per=agg/5;
	printf("\n aggregate marks obtained in five subjects is %d", agg);
	printf("\n percentage of marks obtained in five subjects is %d", per);
	return 0;
 } 
