#include<stdio.h>
#include<math.h>
int isPrime(int x) {
  if(x==2)
  return 1;
  else
  {
  if (x % 2 == 0) {
    return 0;
  }
  }
  for (int i = 3; i <= sqrt(x); i += 2) {
    if (x % i == 0) {
      return 0;
    }
  }
  return 1;
}
int main()
{   
    if(isPrime())
        printf("Prime");
    
    return 0;
}
