/*A
  BC
  DEF
  GHIJ*/
#include<stdio.h>
int main()
{
	int i,j;
	char k='A';
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
		printf("%c ",k);
		k++;
	    }
	    printf("\n");
	}
	return 0;
}
