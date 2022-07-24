/*Q1.Create a class called Time that has separate int member data for hours, minutes and seconds.
     One function should initialize this data to 0, and another should initialize it to fixed values.
     A member function should display it in 11:59:59 format. 
     A member function named addTime() should add two objects of type time passed as arguments. 
     A main ( ) program should create two initialized values together, 
     leaving the result in the third time variable. Finally it should display the value of this third variable.*/

#include<iostream>
using namespace std;

class Time
{
    private:
        int hour, minute, second;

    public:
       Time()
        {
            hour=0;
            minute=0; 
            second=0;
        } 

        void SetFixedValue(int hour, int minute, int second)
        {
            Time::hour=hour;
            Time::minute=minute;
            Time::second=second;
        } 

        void AddTime(Time object1, Time object2)
        {
            hour = object1.hour + object2.hour;
            minute = object1.minute + object2.minute;
            second = object1.second + object2.second;
        }

        void Display()
        {
            if(second>60)
            {
                minute += (second/60);
                second %= 60;
            }

            if(minute>60)
            {
                hour += (minute/60);
                minute %= 60;
            }

            cout<<"Total time is : " << hour << " : " << minute << " : " << second;
        
        }

};

int main()
{
    Time object1, object2, object3;
    int hour, minute, second;

    cout<<"Enter Time for OBJECT 1 : " << endl;
    cout<<"enter hour : ";
    cin>> hour;
    cout<<"enter minute : ";
    cin>> minute;
    cout<<"enter second : ";
    cin>> second;
    object1.SetFixedValue(hour, minute, second);

    cout<<"Enter Time for OBJECT 2 : " << endl;
    cout<<"enter hour : ";
    cin>> hour;
    cout<<"enter minute : ";
    cin>> minute;
    cout<<"enter second : ";
    cin>> second;
    object2.SetFixedValue(hour, minute, second);
    
    object3.AddTime(object1, object2);
    object3.Display();

    return 0;

}
     


