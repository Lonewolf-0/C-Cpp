//Wap to find average of top three results out of four conducted.(eliminate the smallest one)
#include <stdio.h>
int main()
{
    int a,b,c,d,avg;
    printf("Enter four numbers (Seperate them using space) : ");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if((a<b) && (a<c) && (a<d))
    {
        printf("\n are largest numbers %d,%d,%d",b,c,d);
        avg=(b+c+d)/3;
    }
    else if((b<a) && (b<c) && (b<d))
      {
          printf("\n are largest numbers %d,%d,%d",a,c,d);
          avg=(a+c+d)/3;
      }
      else if((c<b) && (c<a) && (c<d))
        {
            printf("\n are largest numbers %d,%d,%d",a,b,d);
            avg=(a+b+d)/3;
        } 
        else if((d<a) && (d<b) && (d<c))
          {
              printf("are largest numbers %d,%d,%d",a,b,c);
              avg=(a+b+c)/3;
          }
    printf("\n average of three largest out of four numbers is %d", avg);       
    return 0;
}
