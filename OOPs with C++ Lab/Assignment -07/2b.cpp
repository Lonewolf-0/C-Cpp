// Write a C++ program to overload binary + operator by using friend function.

#include<iostream>
using namespace std;

class Operator 
{
    private:
        int a, b;

    public:
        void SetDetails(int n1, int n2)
        {
            a=n1;
            b=n2;
        }  

        friend Operator operator+(Operator &obj1, Operator &obj2);

        void display()
        {
            cout<< a << " " << b << endl;
        }

};


Operator operator+(Operator &obj1, Operator &obj2)
{
    Operator temp;
    temp.a = (obj1.a)+(obj2.a);
    temp.b = (obj1.b)+(obj2.b);
    return temp;
}


int main()
{
    Operator m1, m2, m3;

    m1.SetDetails(2, 5);
    m2.SetDetails(3, 4);

    m3 = m1 + m2;

    m3.display();

    return 0;
    
}