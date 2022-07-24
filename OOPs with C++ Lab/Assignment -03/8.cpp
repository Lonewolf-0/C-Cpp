/*Q8. Write a C++ program to input five words from the console and count number of words are palindrome .*/

#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int i, j, j1, k, count_spaces=0, count_PalindromeWords=0;
    string sentence;

    cout<<"Enter a string of five words : ";
    getline(cin, sentence);
    
    for(i=0; sentence[i]!='\0'; i++)
    {
        if(sentence[i]==' ')
        {
            count_spaces++;

            for((count_spaces=1? j=0: j=j1+1), (k=i-1) ; sentence[j]!=' '; j++, k--)
            {
                if(sentence[j]!=sentence[k])
                {
                    break;
                }

            }

            if(j>=k)
            {
                count_PalindromeWords++;
            }

        }

        j1=j;

    }

    printf("Number of Palindrome words are : %d", count_PalindromeWords);

    return 0;

}