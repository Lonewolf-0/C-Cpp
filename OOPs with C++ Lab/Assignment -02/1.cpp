/*
Q1. Write a C++ program to calculate area of a circle, a rectangle or a triangle depending upon user’s choice.
(Use switch statement)
*/

#include<iostream>
#include<math.h>

#define pi 3.14

using namespace std;

int main()
{
    float r;
    float l, b;
    float s1, s2, s3;
    float a, s;

    int choice;

    while(1)
    {
        cout<<"\n\nMenu is as given : " << endl;
        cout<< "1. area of circle." << endl << "2. area of rectangle." << endl << "3. area of rectangle." << endl << "4. exit";
        cout<< endl << "enter your choice : ";
        cin>> choice;

        switch(choice)
        {
            case 1 : cout<< "enter radius : ";
                     cin>> r;
                     a = r*r*pi;
                     cout<< "Area of circle is : " << a;
                     break;

            case 2 : cout<< "enter length and breadth : ";
                     cin>> l >> b;
                     a = l*b;
                     cout<< "Area of circle is : " << a;
                     break;

            case 3 : cout<< "enter three sides of triangle : ";
                     cin>> s1>> s2>> s3;
                     s=(s1+s2+s3)/2;
                     a=pow((s*(s-s1)*(s-2)*(s-s3)), 0.5);
                     cout<< "Area of circle is : " << a;  
                     break;                

            case 4 : exit(0);

            default : cout<<"Try again !!";

        }

    }    

    return 0;

}