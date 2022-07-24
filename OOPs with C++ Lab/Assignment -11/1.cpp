/*1. Write a C++ program to implement pure virtual function with following details:
 Create  A Base Class        Temperature
Data members:
Float temp;
Function members
void setTempData(float)
virtual void changetemp()
Sub Class Fahrenheit      (subclass of Temperature)
Data members:
Float ctemp;
Function members
Override function changetemp() to convert Fahrenheit temperature into degree Celsius by using 
formula C=5/9*(F-32) and display converted temperature
Sub Class Celsius                  (subclass of Temperature)
Data members:
Float  ftemp;
Function members
Override function changetemp() to convert degree Celsius into Fahrenheit temperature  by using  
formula F=9/5*c+32 and display converted temperature
*/


#include<iostream>
using namespace std;

class Temperature
{
    protected:
        float temp;
    
    public:
        void SetTempData(float temp)
        {
            Temperature::temp=temp;
        }
        
        virtual void changetemp()=0;

};


class Fahreinheit : public Temperature
{
    protected:
        float ctemp;
    
    public:
        void changetemp()
        {
            ctemp=5/9*(temp-32);

            cout<<"Temperature in celsius is : " <<ctemp <<endl;
        }
        
};


class Celsius : public Temperature
{
    protected:
        float ftemp;
    
    public:
        void changetemp()
        {
            ftemp=((9/5)*temp)+32;

            cout<<"Temperature in fahreinheit is : " <<ftemp <<endl;
        }
        
};


int main()
{
    Fahreinheit obj1;
    Celsius obj2;
    float temperature;

    cout<<"Enter temperature in fahreinheit : ";
    cin>>temperature;

    obj1.SetTempData(temperature);
    obj1.changetemp();

    cout<<"Enter temperature in celsius : ";
    cin>>temperature;

    obj2.SetTempData(temperature);
    obj2.changetemp();

    return 0;

}