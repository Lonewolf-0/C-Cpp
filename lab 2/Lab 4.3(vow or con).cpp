//Wap to find whether a given character is vowel or consonant??
#include<stdio.h>
int main()
{
	char c;
	printf("\n Enter the character");
	scanf("\n%c", &c);
	if(c=='a' || c=='A')
	{
		printf("\n character is vowel");
	}
    else if(c=='e' || c=='E')
	{
		printf("\ncharacter is vowel");
	}
	else if(c=='i' || c=='I')
	{
		printf("\ncharacter is vowel");
	}
	else if(c=='o' || c=='O')
	{
	    printf("\ncharacter is vowel"); 	
	}
	else if(c=='u' || c=='U')
	{
	    printf("\ncharacter is vowel"); 	
	} 
	else
	{
		printf("\ncharacter is consonant");
	}
	return 0;
}
