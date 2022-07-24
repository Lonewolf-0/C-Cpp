/*2.Create a base class called shape. Use this class to store two double type values that could be used 
to compute the area of figures. Derive two specific classes called triangle and rectangle from base shape. 
Add to the base class , a member function get_data() to initialize base class data members and another 
member function display_area() to compute and display the area of figures. Make display_area() as a 
virtual function and redefine this function in the derived class to suit their requirements. Using 
these three classes, design a program that will accept dimensions of a triangle or a rectangle 
interactively and display the area.Remember the two values given as input will be treated as lengths of 
two sides in the case of rectangles and as base and height in the case of triangle and used as follows:
Area of rectangle = x * y
Area of triangle = ½ *x*y  
*/


#include<iostream>
using namespace std;

class shape
{
    protected:
        double x, y;
    
    public:
        void get_data(double x, double y)
        {
            shape::x=x;
            shape::y=y;
        }
        
        virtual void display_area()
        {
            cout<<"Area is : "<< x*y <<endl;
        }

};


class rectangle : public shape
{
    public:
        
        void display_area()
        {
            cout<<"Area of rectangle is : "<< x*y <<endl;
        }

};


class triangle : public shape
{
    public:
        
        void display_area()
        {
            cout<<"Area of triangle is : "<< (1/2.0)*x*y <<endl;
        }

};

int main()
{
    rectangle area_r;
    triangle area_t;
    
    double x,y;

    cout<<"Enter 'x' and 'y' for rectangle : ";
    cin>>x>>y;

    area_r.get_data(x,y);
    area_r.display_area();

    cout<<"Enter 'x' and 'y' for triangle : ";
    cin>>x>>y;

    area_t.get_data(x,y);
    area_t.display_area();

    return 0;

}