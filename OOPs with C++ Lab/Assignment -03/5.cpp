#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main()

{
	char str[1000];
    int word_position1, word_position2, count=0, i, j, k;

	cout << "Input the sentence : ";
    cin.getline(str, 1000);

    cout<< "Input integers : ";
    cin>> word_position1 >> word_position2;

	for(i=j=k=0; str[i]!='\0'; i++)
    {
        if(str[i]==' ' || str[i+1]=='\0')
        {
            ++count;

            for( k = ( (str[i] == ' ')? i-1 : i ) ; j<=k ; j++)
            {
                if(count==word_position1 || count==word_position2)
                {
                    str[j]=str[j]+1;
                }
            }

            j=i+1;

        }
    }
    cout << "Output Sentence : ";

    for(i=0; str[i]!='\0'; i++)
    {
        cout<< str[i];
    }
	

	return 0;

}