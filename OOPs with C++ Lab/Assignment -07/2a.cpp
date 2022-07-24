// Write a C++ program to overload binary + operator without using friend function.

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

        Operator operator+(Operator obj)
        {
            Operator temp;
            temp.a = a+(obj.a);
            temp.b = b+(obj.b);
            return temp;
        }  

        void display()
        {
            cout<< a << " " << b << endl;
        }

};


int main()
{
    Operator m1, m2, m3;

    m1.SetDetails(2, 5);
    m2.SetDetails(3, 4);

    m3 = m1 + m2;

    m3.display();

    return 0;
    
}