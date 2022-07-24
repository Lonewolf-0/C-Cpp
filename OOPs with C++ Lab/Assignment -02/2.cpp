/*
Q2. Using a switch statement, 
write a menu driven C++ program to convert a given temperature Fahrenheit to Celsius and vice versa.
For an incorrect choice, an appropriate error message should be displayed.
(Hints: C=5/9*(F-32) and F=1.8*C+32)
(Use switch statement)
*/

#include<iostream>

using namespace std;

int main()
{
    float f, c;
    int choice;
    
    while(1)
    {
        cout<<"\n\nMenu is as given : " << endl;
        cout<< "1. fahreinheit to celsius." << endl << "2. celsius to fahreinheit." << endl << "3. exit";
        cout<< endl << "enter your choice : ";
        cin>> choice;

        switch(choice)
        {
            case 1 : cout<< "enter temperature in fahreinheit : ";
                     cin>> f;
                     c = f*(5/9)-32;
                     cout<< "Temperature in celsius is : " << c;
                     break;

            case 2 : cout<< "enter temperature in celsius : ";
                     cin>> c;
                     f = c*(9/5)+32;
                     cout<< "Temperature in fahreinheit is : " << f;
                     break;
            
            case 3 : exit(0);

            default : cout<<"Error";
             
        }
    } 

        

    return 0;

}