#include<stdio.h>

void hello()
{
    printf("Hello welcome to C");
}


int armstrong(int number) 
{

  // declare variables
  int lastDigit = 0;
  int power = 0;
  int sum = 0;

  // temporary variable to store number
  int n = number;

  while(n!=0) {

     // find last digit
     lastDigit = n % 10;

     // find power of digit (order = 3)
     power = lastDigit*lastDigit*lastDigit;

     // add power value into sum
     sum += power;

     // remove last digit
     n /= 10;
  }

  if(sum == number) 
  return 1;

  else 
  return 0 ;
  //if armstrong return 1
}

int factorial(int a)
{
    if(a==0||a==1)
        return 1;
    else
        return(a*factorial(a-1));
}

int prime( int a)
{
    int  n, i, s = 0;
    
    for (i = 2; i <= a / 2; i++)
    {
        if (a % i == 0)
            s = s + 1;
    }
    if (s)
        return 0;
    else
        return 1;
    // if prime return 1
}