/*3.Create a base class called CAL_AREA(Abstract). 
Use this class to store float type values that could be used to compute the volume of figures. 
Derive two specific classes called cone, hemisphere  and cylinder from the base CAL_AREA. 
Add to the base class, a member function getdata ( ) to initialize base class data members and another 
member function display volume( ) to compute and display the volume of figures. Make display volume ( ) 
as a pure virtual function and redefine this function in the derived classes to suit their requirements. 
three classes, design a program that will accept dimensions of a cone, cylinder and hemisphere 
interactively and display the volumes. Remember values given as input will be and used as follows:
Volume of cone = (1/3)πr2h
Volume of hemisphere = (2/3)πr3 
Volume of cylinder = πr2h*/


#include<iostream>
using namespace std;

class CAL_AREA
{
    protected:
        float r, h;
    
    public:
        void get_data()
        {
            cout<<"Enter the radius : ";
            cin>>r;
            cout<<"Enter the height : ";
            cin>>h;
        }

        virtual void display_volume()=0;
};


class cone : public CAL_AREA
{
    public:
        void display_volume()
        {
            cout<<"Volume of cone is : " << (1/3.0)*3.14*r*r*h <<endl;
        }
};


class hemisphere : public CAL_AREA
{   
    public:
        void display_volume()
        {
            cout<<"Volume of hemisphere is : " << (2/3.0)*3.14*r*r*r <<endl;
        }
};


class cylinder : public CAL_AREA
{
    public:
        void display_volume()
        {
            cout<<"Volume of cylinder is : " << 3.14*r*r*h <<endl;
        }
};


int main()
{
    cone volume_cone;
    hemisphere volume_hemisphere;
    cylinder volume_cylinder;

    volume_cone.get_data();
    volume_cone.display_volume();

    volume_hemisphere.get_data();
    volume_hemisphere.display_volume();

    volume_cylinder.get_data();
    volume_cylinder.display_volume();

    return 0;

}