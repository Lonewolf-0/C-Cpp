/*Q4. Write a C++ program to input any string and arrange all characters in following order.
        Digit + Uppercase + Lowercase + Special Characters
        Sample Example:
        Input:     GrAphic567E#@RA
        Output:    567GAERArphic#@
*/

#include<iostream>
using namespace std;

int main()
{
    string str_org, str_modify;
    int i , k=0;

    cout<<"Enter the string : ";
    getline(cin,str_org);

    str_modify=str_org;

    for(i=0; str_org[i]!='\0'; i++)
    {
        if(str_org[i] >= '0' && str_org[i] <= '9')
        {
            str_modify[k]=str_org[i];
            k++;
        }
    }

    for(i=0; str_org[i]!='\0'; i++)
    {
        if(str_org[i] >= 'A' && str_org[i] <= 'Z')
        {
            str_modify[k]=str_org[i];
            k++;
        }
    }

    for(i=0; str_org[i]!='\0'; i++)
    {
        if(str_org[i] >= 'a' && str_org[i] <= 'z')
        {
            str_modify[k]=str_org[i];
            k++;
        }
    }

    for(i=0; str_org[i]!='\0'; i++)
    {
        if((str_org[i]>=32 && str_org[i]<=47)||
        (str_org[i]>=58 && str_org[i]<=64)||
        (str_org[i]>=91 && str_org[i]<=96)||
        (str_org[i]>=123 && str_org[i]<=126))
        {
            str_modify[k]=str_org[i];
            k++;
        }
    }

    str_modify[k++]='\0';

    cout<<str_modify;

    return 0;

}