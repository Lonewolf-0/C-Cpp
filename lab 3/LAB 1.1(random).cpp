 /*Write a program that generates a random number and asks the user to guess what the number is. 
 If the user's guess is higher than the random number, the program should display "Too high, try again."
  If the user's guess is lower than the random number, the program should display "Too low, try again." 
 The program should use a loop that repeats until the user correctly guesses the random number.*/
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
int main()
{
	int n,num,i=1;
	srand(time(0));
	n = rand()%100+1;
	printf("random number is %d", n);
	
	do
    {    
    	printf("\n enter the number which u guess as an output : ");
	    scanf("%d", &num);
        
        {
	    	
	    	    if (num<n)
	    	    {
	    		    printf("\n Too low, try again.\n");
			    }
			    else if(num>n)
			    {
	    		    printf("\n Too high, try again.\n");
			    }
			    else 
			    {
			    	printf("\n you have guessed the number right in %d attempts.", i);
				}
		}
		
		i++;
         
    }while(num!=n);
    return 0;
	
	
}
