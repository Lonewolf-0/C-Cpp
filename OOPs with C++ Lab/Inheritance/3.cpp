/* 3.	Write a program that defines a shape class with a constructor that gives value to width and height. 
        Then define two sub-classes triangle and rectangle, that calculate the area of the shape area (). 
        In the main, define two variables a triangle and a rectangle and then call the area() function 
        in this two varibles.*/

#include<iostream>
using namespace std;

class shape
{
    protected:
        int width, height;
    public:
        shape()
        {
            width=0;
            height=0;
        }

        shape(int w, int h)
        {
            width=w;
            height=h;
        }

};


class triangle : public shape
{ 
    private:
        int w, h;
    public:
        triangle(int w, int h):shape(w,h)
        {}

        void TriangleArea()
        {
            cout<<"Area of triangle is : " << 0.5*width*height  << endl;
        }
};

class rectangle : public shape
{
    private:
        int w, h;
    public:
        rectangle(int w, int h):shape(w,h)
        {}

        void RectangleArea()
        {
            cout<<"Area of rectangle is : " << width*height  << endl;
        }
};


int main()
{
    triangle object_triangle(3,4);
    object_triangle.TriangleArea();

    rectangle object_rectangle(3,4);
    object_rectangle.RectangleArea();

    return 0;
}