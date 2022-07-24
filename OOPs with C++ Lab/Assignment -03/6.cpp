/*Write a C++ Program to input any str and count the number of occurrence of each Character. 
Sample Example:
INFORMATION TECHNOLOGY
I=2
N=3
F=1
O=4
R=1
M=1
A=1
T=2
E=1
C=1
H=1
L=1
G=1
Y=1 */


#include <iostream>  
#include <string.h> 
using namespace std;
   
int main()  
{  
    string str;  
    
    cout<<"Enter the string : ";
    getline(cin, str);

    int i, j, len = str.size();  
    int freq[len];  
      
    for(i = 0; i < len; i++) 
    {  
        freq[i] = 1;  
        for(j = i+1; j < len; j++) 
        {  
            if(str[i] == str[j]) 
            {  
                freq[i]++;  
                str[j] = '0';  
            }  
        }  
    }  
      
    cout<< "Characters and their corresponding frequencies\n";  
    for(i = 0; i < len; i++) 
    {  
        if(str[i] != ' ' && str[i] != '0')  
            cout<< str[i] << " = " << freq[i] << endl;  
    }  
          
    return 0;  
}  