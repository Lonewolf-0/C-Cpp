/* Write a C++ program to overload increament and decreament operator in postfix and prefix program
   without using friend function
*/

#include<iostream>
#include<stdlib.h>
using namespace std;

class Operator
{
    private:
        int num;

    public:
        void SetValue(int n)
        {
            num=n;
        }   

        void operator++()
        {
            cout<<"Prefix increament operator function called." << endl;
            num=num+1;
        } 

        void operator--()
        {
            cout<<"Pretfix decreament operator function called." << endl;
            num=num-1;
        }

        Operator operator++(int n)
        {
            cout<<"Postfix increament operator function called." << endl;
            Operator duplicate(*this);
            num= num+1;
            return duplicate;
        }

        Operator operator--(int n)
        {
            cout<<"Postfix decreament operator function called." << endl;
            Operator duplicate(*this);
            num= num-1;
            return duplicate;
        }

        void display()
        {
            cout<<"Number is : " << num << endl;
        }

};



int main()
{
    Operator object;
    int ch, num;

    cout<<"enter an integer : ";
    cin>> num;

    object.SetValue(num);

    cout<<"\n\n                       M E N U                    \n";
    cout<<"1. increament operator in prefix without using friend function" << endl;
    cout<<"2. decreament operator in postfix without using friend function" << endl;
    cout<<"3. increament operator in prefix without using friend function" << endl;
    cout<<"4. decreament operator in postfix without using friend function" << endl;
    cout<<"5. EXIT" << endl;
    
    cout<<"enter your choice : ";
    cin>>ch;

    switch (ch)
    {
        case 1 : ++object;
                 object.display();
                 break;

        case 2 : --object;
                 object.display();
                 break;

        case 3 : (object++).display();
                 object.display();
                 break;

        case 4 : (object--).display();
                 object.display();
                 break; 

        case 5 : exit(0);
                 break;  

        default: cout<<"Invalid Input";
                 break;

    }

    return 0;
    
}