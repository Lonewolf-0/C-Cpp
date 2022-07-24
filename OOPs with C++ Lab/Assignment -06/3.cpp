/* 3. Define a class named FriendDemo and print string with maximum number 
of vowels with the help of friend class name vowelcheck. */

#include<iostream>
using namespace std;

class VowelCheck;

class FriendDemo
{
    private:
        string str;

    public:
        void SetStr(string strpass)
        {
            str = strpass;
        }    

        friend class VowelCheck;

};

class VowelCheck
{
    private:
        string word1, word2;
        int count=0, max=0;

    public:
        void MaxVowel(FriendDemo obj)
        {
            obj.str;

            for(int i=0; i<obj.str.length(); i++)
            {
                char ch=obj.str.at(i);
                
                if((ch=='a' || ch=='A') &&
                   (ch=='e' || ch=='E') && 
                   (ch=='i' || ch=='I') &&
                   (ch=='o' || ch=='O') &&
                   (ch=='u' || ch=='U'))
                    {
                       count++;
                       word1 += ch;
                    }

                else if(ch==' ')
                {
                    if(count>=max)
                    {
                        max=count;
                        word2=word1;
                    }

                    word1="";
                    count=0;
                }

                else
                {
                    word1 += ch;
                }

            }

        cout<< "Word with maximum vowel is : " << word2 << endl;  

        }  

};

 
int main()
{
    FriendDemo ob1;
    VowelCheck ob2;
    string str;

    cout<<"Enter string : ";
    getline(cin, str);
    ob1.SetStr(str);
    ob2.MaxVowel(ob1);

    return 0;

}