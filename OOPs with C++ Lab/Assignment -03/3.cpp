/*Q3. Write a C++ program to input any sentence and reverse each word in a given sentence.*/

#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main()

{
	char str[1000];
    char temp;

	int i, j, k;

	cout << "Write a sentence : ";

	cin.getline(str, 1000);

	for(i=j=k=0; str[i]!='\0'; i++)
    {
        if(str[i]==' ' || str[i+1]=='\0')
        {
            for( k = ( (str[i] == ' ')? i-1 : i ) ; j<k ; j++, k--)
            {
                temp=str[j];
                str[j]=str[k];
                str[k]=temp;
            }

            j=i+1;

        }
    }

    cout << "Reversed sentence is : ";

    for(i=0; str[i]!='\0'; i++)
    {
        cout<< str[i];
    }
	

	return 0;

}