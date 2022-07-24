/*10. All the banks operating in India are controlled by RBI. 
      RBI has set a well defined guideline (e.g. minimum interest rate, minimum balance allowed, maximum withdrawal
      limit etc) which all banks must follow. For example, suppose RBI has set minimum interest rate applicable to 
      a saving bank account to be 4% annually; however, banks are free to use 4% interest rate or to set any rates 
      above it. Write a program to implement bank functionality in the above scenario. Note: Create few classes
      namely Customer, Account, RBI (Base Class) and few derived classes (SBI, ICICI, PNB etc).
      Assume and implement required member variables and functions in each class.*/

#include<iostream>
using namespace std;

class RBI
{
    protected:
        float minimum_interest_rate=4, minimum_balance_allowed=1000, maximum_withdrawal_limit=99999;
        float interest_rate, balance, withdrawal_amount;

        void SetDetails()
        {
            cout<<"Enter interest rate : ";
            cin>>interest_rate;
            cout<<"Enter the balance amount : ";
            cin>>balance;
            cout<<"Enter the withdrawal amount : ";
            cin>>withdrawal_amount;
        }
    
    public:
        void functionality()
        {
            if(interest_rate>=minimum_interest_rate)
                cout<<"interest rate is : "<< interest_rate <<endl;
            else
                cout<<"Interest rate is less than 4, cannot operate." <<endl;
            if(balance>=minimum_balance_allowed)
                cout<<"balance allowed is : "<< balance <<endl;
            else
                cout<<"Balance is lower than the minimum balance required. " <<endl;
            if(withdrawal_amount<=maximum_withdrawal_limit)
                cout<<"withdrawal limit : "<< withdrawal_amount <<endl;
            else
                cout<<"Withdrawal limit exceeded." <<endl;

        }
};


class SavingAccount : public RBI
{
    private:
        string name;
        long account_number;
    public:
        SavingAccount()
        {
            cout<<"Enter name : ";
            getline(cin, name);
            cout<<"Enter account number : ";
            cin>>account_number;

            SetDetails();
            display();
            functionality();
        }

        void display()
        {
            cout<<"\nName : " <<name <<endl;
            cout<<"Account number : " <<account_number <<endl;
        }
};

int main()
{
    SavingAccount object;
    return 0;

}