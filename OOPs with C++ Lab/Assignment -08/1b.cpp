//Write a C++ program to overload binary == operator without by friend function.


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
        
        friend bool operator==(Operator object1, Operator object2);
        
};

bool operator==(Operator object1, Operator object2)
{
    if(!((object1.a).compare(object2.a)))
    {
        return 1;
    }

    else
    {
        return 0;
    }

} 

int main()
{
    Operator obj1, obj2;
   
    obj1.SetDetails("Anjali");
    obj2.SetDetails("Rashi");

    int result;

    result = (obj1==obj2);

    cout<< result;

    return 0;
}