/*
Q4.Using the switch statement, write a menu-driven
     program to calculate the maturity amount of a bank
     deposit.
The user is given the following options:
(i) Term Deposit
(ii) Recurring Deposit
*/

#include<iostream>

using namespace std;

int main()
{
    float a, p, n, r;
    int choice;
    
    while(1)
    {
        cout<<"\n\nMenu is as given : " << endl;
        cout<< "1. Term Deposit." << endl << "2. Recurring Deposit." << endl << "3. Exit.";
        cout<< endl << "enter your choice : ";
        cin>> choice;

        switch(choice)
        {
            case 1 : cout<< "enter principal amount : ";
                     cin>> p;
                     cout<< "enter rate of interest : ";
                     cin>> r;
                     cout<< "enter time period in years : ";
                     cin>> n;
                     a = p*(1 + (r / 100))*n;
                     cout<< "Amount is : " << a;
                     break;

            case 2 : cout<< "enter monthly installment : ";
                     cin>> p;
                     cout<< "enter rate of interest : ";
                     cin>> r;
                     cout<< "enter time period in months : ";
                     cin>> n;
                     a = (p*n) + (p*n*(n + 1) / 2) * (r / 100) * (1 / 12);
                     cout<< "Amount is : " << a;
                     break;
            
            case 3 : exit(0);

            default : cout<<"Error";
             
        }
   
    }

    return 0;

}
