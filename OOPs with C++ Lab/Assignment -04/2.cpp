/*Q2.Imagine a tollbooth with a class called TollBooth.
The two data items are of type unsigned int and double to hold the total number of cars and total amount of money
collected. A setValue() member function initializes both of these data members to 0. A member function called payingCar( ) 
increments the car total and adds 0.5 to the cash total. Another function called nonPayCar( ) increments the car 
total but adds nothing to the cash total. Finally a member function called display( ) shows the two totals. 
Include a main function to test this class. This program should allow the user to push one key to count a paying car,
and another to count a non paying car. Pushing the ‘E’ key should cause the program to print out the total 
number of cars and total cash and then exit.*/

#include<iostream>
#include<stdlib.h>
using namespace std;

class TollBooth
{
    private:
        unsigned int total_cars;
        double total_money;

    public:
        void SetValue()
        {
            total_cars=0;
            total_money=0;
        }

        void PayingCar()
        {
            total_cars++;
            total_money += 0.5;
        }   

        void NonPayCar()
        {
            total_cars++;
        } 

        void Display()
        {
            cout<< total_cars << endl << total_money;
        }

};

int main()
{
    TollBooth object;
    object.SetValue();

    char ch;

    cout<<"Press 'P' for paying car." <<endl;
    cout<<"Press 'N' for non paying car." <<endl;
    cout<<"Press 'E' for print and exit." <<endl;
    cin>>ch;

    switch(ch)
    {
        case 'P': object.PayingCar();
                  break;
        case 'N': object.NonPayCar();
                  break;
        case 'E': object.Display();
                  exit(0);
        default : cout<<"Invalid Input";
                  exit(0);          
    }

    return 0;

}