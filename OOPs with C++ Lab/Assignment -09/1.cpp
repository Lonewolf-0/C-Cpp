//Write a C++ program to implement Multiple inheritance

#include<iostream>
using namespace std;

class Base1
{
    protected:
        string name;

    public:
        void SetName(string iname)
        {
            name=iname;
        }    

        Base1()
        {
            cout<<"Constructor of base1 class has been called." << endl;
        }

};


class Base2
{
    protected:
        int age;

    public:
        void SetAge(int iage)
        {
            age=iage;
        }    

        Base2()
        {
            cout<<"Constructor of base2 class has been called." << endl;
        }
        
};


class Derived : public Base1, public Base2
{
    public:   
        Derived()
        {
            cout<<"Constructor of Derived class has been called." << endl;
        }

        void display()
        {
            cout<<"Name is : " << name << endl;
            cout<<"Age is : " << age;
        }
        
};


int main()
{
    Derived object;
    object.SetName("Anjali");
    object.SetAge(19);
    object.display();

    return 0;
    
}


