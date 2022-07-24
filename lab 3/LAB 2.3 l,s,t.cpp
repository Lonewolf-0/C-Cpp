//Write a program to input three numbers from the user and find the second largest number among them

#include<stdio.h>
int main()
{
	int a,b,c;
	int large,slarge,tlarge;
	printf("\n enter three numbers");
	scanf("%d%d%d", &a,&b,&c);
	large=a;
	slarge=a;
	tlarge=a;
	if(b>large)
	   { large=b;
	   }
       else if(b<slarge)
	     { slarge=b;
         }
    if(c>large)
	  { tlarge=slarge;
	    slarge=large;
		large=c;
	  }
      else if(c>slarge)
	    { tlarge=slarge;
		  slarge=c;
        }
        else
          { tlarge=c;
		  }
	              
	printf("\n second largest among the three numbers is %d",slarge);

	return 0;
	
}
