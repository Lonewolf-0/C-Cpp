/* Write a C++ program to overload increament and decreament operator in postfix and prefix program:
   by using friend function
*/

#include<iostream>
#include<stdlib.h>
using namespace std;

class Operator
{
    private:
        int num;

    public:
        void SetDetails(int n)
        {
            num=n;
        }  

        friend void operator++(Operator &object);

        friend void operator--(Operator &object);

        friend Operator operator++(Operator &object, int );

        friend Operator operator--(Operator &object,int );

        void display()
        {
            cout<<"Number is : " << num << endl;
        }

};

void operator++(Operator &object)
{
    cout<<"Prefix increament operator function called." << endl;
    object.num++;
}

void operator--(Operator &object)
{
    cout<<"Prefix decreament operator function called." << endl;
    object.num--;
}

Operator operator++(Operator &object, int )
{
    cout<<"Postfix increament operator function called." << endl;
    Operator duplicate(object);
    object.num = object.num+1;
    return duplicate;
}

Operator operator--(Operator &object, int )
{
    cout<<"Postfix decreament operator function called." << endl;
    Operator duplicate(object);
    object.num = object.num-1;
    return duplicate;
}


int main()
{
    Operator object;
    object.SetDetails(10);
    int ch;

    cout<<"\n\n                       M E N U                    \n";
    cout<<"1. increament operator in prefix by using friend function" << endl;
    cout<<"2. decreament operator in prefix by using friend function" << endl;
    cout<<"3. increament operator in postfix by using friend function" << endl;
    cout<<"4. decreament operator in postfix by using friend function" << endl;
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