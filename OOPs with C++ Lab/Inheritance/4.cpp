/*4. Write a program with a mother class and an inherited daugther class.
     Both of them should have a method void display() that prints a message(different for mother and daugther).
     In the main define a daughter and call the display() method on it.*/


#include<iostream>
using namespace std;

class mother
{
    public:
        void display()
        {
            cout<<"I'm mother." <<endl;
        }
};

class daughter : public mother 
{
    public:
        void display()
        {
            cout<<"I'm daughter." <<endl;
        }
};

int main()
{
    daughter object;
    object.display();

    return 0;
}

