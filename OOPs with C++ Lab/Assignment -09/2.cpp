// Write a CPP program to implement Multilevel Inheritance.

#include<iostream>
using namespace std;

class Base1
{
    protected:
        string name1;
    
    public:
        void SetName1(string iname)
        {
            name1=iname;
        }

};

class Derived1 : public Base1
{
    protected:
        string name2; 

    public:
        void SetName2(string iname)
        {
            name2=iname;
        }

        void Display1()
        {
            cout<<"Name1 : " << name1 << endl;
        }

};


class Derived2 : public Derived1
{
    public:
        void Display2()
        {
            cout<<"Name2 : " << name2 << endl;
        }

};


int main()
{
    Derived2 object1, object2;
    object1.SetName1("Anjali");
    object1.Display1();
    
    object2.SetName2("Rashi");
    object2.Display2();

    return 0;

}