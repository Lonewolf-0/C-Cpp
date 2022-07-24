/*Q3.Write a C++ program to create a class named 'Bank ' with the following data members:
 Name of depositor
 Address of depositor
 Account Number
 Balance in account
 
Class 'Bank' has a method for each of the following: 
1 - Generate a unique account number for each depositor
For first depositor, account number will be 1001, for second depositor it will be 1002 and so on
2 - Display information and balance of depositor
3 - Deposit more amount in balance of any depositor
4 - Withdraw some amount from balance deposited
5 - Change address of depositor

After creating the class, do the following operations
1 - Enter the information (name, address, account number, balance) of the depositors. Number of depositors is to be entered by user.
2 - Print the information of any depositor.
3 - Add some amount to the account of any depositor and then display final information of that depositor
4 - Remove some amount from the account of any depositor and then display final information of that depositor
5 - Change the address of any depositor and then display the final information of that depositor
6 - Randomly repeat these processes for some other bank accounts.*/


#include<iostream>
using namespace std;

class Bank
{
    private:
        string name_of_depositor, address;
        long account_number;
        float balance;

    public:

        int check()
        {
            return account_number;
        }

        void Generate_Account(int i)
        {
            account_number=1000+i;
            fflush(stdin);
            cout<<"Enter name : ";
            getline(cin, name_of_depositor);
            fflush(stdin);
            cout<<"Enter the deposit amount : ";
            cin>>balance;
            fflush(stdin);
            cout<<"Enter address : ";
            getline(cin, address);

            Display();
        }

        void Add()
        {
            int amount;
            cout<<"Ennter amount which has to be added in the balance account : ";
            cin>>amount;
            balance += amount;
        }

        void Withdraw()
        {
            int amount;
            cout<<"Ennter amount which has to be withdrawn from the balance account : ";
            cin>>amount;
            balance -= amount;
        }

        void ChangeAddress()
        {
            cout<<"Enter new address : ";
            getline(cin, address);
        }

        void Display()
        {
            cout<<"Nmae : " << name_of_depositor << endl;
            cout<<"Account number : " << account_number << endl;
            cout<<"Address : " << address << endl;
            cout<<"Balance : " << balance << endl;
        }

};


int main()
{
    int n, choice, acc_no, test=1, j;

    cout<<"Enter number of users : ";
    cin>>n;

    Bank user[n];

    for(int i=0; i<n; i++)
        user[i].Generate_Account(i);
    
    do
    {
        cout<<"Enter Account number : ";
        cin>>acc_no;

        for(int i=0; i<n; i++)
        {
            if(user[i].check()==acc_no)
            {
                j=i;
                break;
            }
        }

        cout<<"Enter the chouce : ";
        cin>>choice;

        switch (choice)
        {
            case 1 : user[j].Display();
                     break;
        
            case 2 : user[j].Add();
                     user[j].Display();
                     break;
            case 3 : user[j].Withdraw();
                     user[j].Display();
                     break;
            
            default: cout<<"Try Again!!!";
                     break;
        }

    } while (test);

    return 0;

}