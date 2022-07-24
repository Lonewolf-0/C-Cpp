/*Q7. Write a C++ program to input five words from the console and remove the consecutive repeated characters 
 by replacing the sequence of repeated characters by its
 single occurrence of each words.

Sample Example:
INPUT – PROOOGGRAMMMMIIING
OUTPUT – PROGRAMING

INPUT – HowwwaareeyooUU
OUTPUT – HowareyoU*/

#include <iostream>  
#include <string.h> 
using namespace std;
   
int main()  
{  
    string str;  
    
    cout<<"Enter the string : ";
    getline(cin, str);

    int i, j, len=str.size();  
      
    for(i=0; i<(len);)
    {
        if(str[i]==str[i+1])
        {
            for(j=i;j<(len);j++)
                str[j]=str[j+1];
            len--;
        }
        else
        {
            i++;
        }
    }

    str[i]='\0';

    for(i=0; i<=len; i++)
    {
        cout<<str[i];
    }
          
    return 0;  
}  
