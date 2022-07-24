//Wap to input a character that finds whether it is number, alphabet or a special symbol
#include<stdio.h>
int main()
{
	char ch;
	printf("\n enter any character : ");
	scanf("%c", &ch);
	if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
	{
		printf("\n an alphabet");
	}
	else if(ch>='0' && ch<='9')
	{
		printf("\n a digit");
	}
	else
	{
		printf("\n a special symbol");
	}
	return 0;
}
