/*Q2.Create class SavingsAccount. 
     Use a static variable annualInterestRate to store the annual interest rate for all account holders. 
     Each object of the class contains a private instance variable savingsBalance indicating the amount the 
     saver currently has on deposit. Provide method calculateMonthlyInterest to calculate the monthly interest
     by multiplying the savingsBalance by annualInterestRate divided by 12.
     This interest should be added to savingsBalance.Provide a static method modifyInterestRate that sets the 
     annualInterestRate to a new value.Write a program to test class SavingsAccount.Instantiate two savingsAccount 
     objects, saver1 and saver2, with balances of $2000.00 and $3000.00, respectively. Set annualInterestRate to 4%,
     then calculate the monthly interest and print the new balances for both savers. Then set the 
     annualInterestRate to 5%, calculate the next month’s interest and print the new balances for both savers.*/

#include<iostream>
using namespace std;

class SavingsAccount
{
    private:
        static float AnnualInterestRate;
        float SavingsBalance;
    
    public:
        void SetValue(float a)
        {
            SavingsBalance=a;
            AnnualInterestRate=4.00;
        }
        
        void CalculateMonthlyInterest()
        {
            SavingsBalance += (SavingsBalance)*((AnnualInterestRate)/12);
        }

        static void ModifyInterestRate(float x)
        {
            AnnualInterestRate=x;
        }

        void Display()
        {
            cout<<"Current Amount is : " << SavingsBalance << endl;
        }

};

float SavingsAccount::AnnualInterestRate;

int main()
{
    SavingsAccount server1, server2;
    
    server1.SetValue(2000.00);
    server2.SetValue(3000.00);

    server1.CalculateMonthlyInterest();
    server2.CalculateMonthlyInterest();
    
    server1.Display();
    server2.Display();

    return 0;

}
