/*Q2. Write a C++ program to input any sentence and count number of words in a given sentence.*/

#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main()

{
	char str[100];

	int i, len, count = 0;

	cout << "Write a sentence : ";

	gets(str);

	len = strlen(str);

	for (i = 0; i < len; i++)

	{
		if (str[i] == ' ')

		{
			count++;
		}
	}

	cout << "Total number of words in a sentence is " << count + 1;

	return 0;

}