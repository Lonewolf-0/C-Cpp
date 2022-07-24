//Write a C++ program to overload binary == operator without using friend function.


#include<iostream>
using namespace std;

class Operator
{
    private:
        string a;

    public:
        void SetDetails(string num)
        {
            a=num;
        }

        bool operator==(Operator object)
        {
            if(!(a.compare(object.a)))
            {
                return 1;
            }

            else
            {
                return 0;
            }

        } 
   
};


int main()
{
    Operator obj1, obj2;
   
    obj1.SetDetails("Rashi");
    obj2.SetDetails("Anjali");

    int result;

    result = (obj1==obj2);

    cout<< result;

    return 0;
}