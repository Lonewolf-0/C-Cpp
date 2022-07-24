//wap to find the largest of three numbers and write the numbers in ascending order
#include<stdio.h>
int main()
{
	int a,b,c,d;
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
	              
	printf("\n largest among the three numbers is %d",large);
	printf("\n numbers in ascending order are %d,%d,%d", tlarge,slarge,large);
	return 0;
	
}
