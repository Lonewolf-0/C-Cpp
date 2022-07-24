#include<iostream>
using namespace std;

class Animal
{
    public:
        int age;

        Animal()
        {
            cout<<"Animal constructor." << endl;
        }

        void walks()
        {
            cout<<"Animal walks." << endl;
        }
};


class Tiger : virtual public Animal
{
    public:
        Tiger()
        {
            cout<<"Tiger constructor." << endl;
        }

};


class Lion : virtual public Animal
{
    public:
        Lion()
        {
            cout<<"Lion constructor." << endl;
        }

};


class Lioner : public Tiger, public Lion
{
    public:
        Lioner()
        {
            cout<<"Lioner constructor." << endl;
        }

};


int main()
{
    Lioner object;
    object.walks();
    
    return 0;
    
}