/*Write a do-while loop that asks the user to enter two numbers. 
 The numbers should be added and the sum displayed.
 The loop should ask the user whether he or she wishes to perform the operation again.
 If so, the loop should repeat; otherwise it should terminate.*/
 
#include<stdio.h>
int main()
{
	int n1,n2,sum=0;
	char ch;
	
	do
	{
		printf("\n enter the two numbers : ");
		scanf("%d%d", &n1,&n2);
		sum=n1+n2;
		printf("\n sum of the above two numbers is %d ", sum);
		printf("\n\n do you wish to perform the operation again (Y/N) ? ");
		scanf("%s", &ch);
	}while(ch == 'Y' || ch == 'y');
	 
	return 0;
	
}
