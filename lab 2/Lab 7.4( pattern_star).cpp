/*program to print the following patterns
           *
		*  *  *
	 *  *  *  *  *
  *  *  *  *  *  *  *
     *  *  *  *  *
	    *  *  *
		   *
*/
#include<stdio.h>
int main()
{
	//upper half of the diagonal
	int row1,space1,star1;
	for(row1=1;row1<=4;row1++)
	{
		for(space1=1;space1<=(8-2*row1);space1++)
		printf(" ");
		for(star1=1;star1<=((2*row1)-1);star1++)
		printf("* ");
		printf("\n");
	}
	
	//lower half of the diagonal
	int row2,space2,star2;
	for(row2=3;row2>=1;row2--)
	{
		for(space2=1;space2<=(8-2*row2);space2++)
		printf(" ");
		for(star2=1;star2<=((2*row2)-1);star2++)
		printf("* ");
		printf("\n");
	}
	return 0;
}
