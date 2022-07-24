/*11.	Write a C++ program to add two numbers using single inheritance. 
        Accept these two numbers from the user in base class and display the sum of these two numbers in 
        derived class.*/

#include<iostream> 
using namespace std;

class base
{
    protected:
        int a, b;
    
    public:
        void SetDetails(int ia, int ib)
        {
            a=ia;
            b=ib;
        }
};


class derived : public base
{
    public:
        void SUM()
        {
            cout<<"SUM is : " << a+b <<endl;
        }
};


int main()
{
    derived object;
    object.SetDetails(3,4);
    object.SUM();

    return 0;
    
}