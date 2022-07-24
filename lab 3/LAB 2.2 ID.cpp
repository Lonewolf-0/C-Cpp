/*Write a program in C which allow the user to type his own ID, 
 if the ID is valid it will ask him to enter his password, 
 if the password is correct the program will print the name of the user,
 otherwise ,the program will print Incorrect Password and if the ID does not exist , 
 the program will print Incorrect ID.

SAMPLE OUTPUT:

Please Enter Your ID:

 500

Enter your password:

 000

Welcome Dear Programmer*/

#include<stdio.h>
int main()
{
	int ID,pass;
	printf("\n Please Enter your ID : ");
	scanf("%d", &ID);
	
	switch(ID)
	{
		case 500 : printf("\n Enter your password : ");
		           scanf("%d", &pass);
		           switch(pass)
		           {
		           	    case 000 : printf("\n Welcome Dear Daniel");
		           	    break;
		           	    default : printf("\n Incorrect passwpord");
		           	    
				   }
				   break;
		
		default : printf("\n Incorrect ID");		   
		           
	}
}
