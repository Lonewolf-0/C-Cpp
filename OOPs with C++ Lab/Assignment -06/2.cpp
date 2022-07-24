// 2. Define a class named userone & a friend function usercheck to compare string name & id with another class user two.

#include<iostream>
using namespace std;

// forward declaration
class usertwo; 

class userone 
{
    private:
        string Oname, Oid;

    public:
        void SetDataOne(string name, string id)   
        {
            Oname=name;
            Oid=id;
        } 

        friend void usercheck(userone, usertwo);

};

class usertwo
{
    private:
        string Tname, Tid;

    public:
        void SetDataTwo(string name, string id)   
        {
            Tname=name;
            Tid=id;
        } 

        friend void usercheck(userone, usertwo);

};


void usercheck(userone obj1, usertwo obj2)
{
    if(!((obj1.Oname).compare(obj2.Tname)) && !((obj1.Oid).compare(obj2.Tid))) 
    {
        cout<<"same data";
    }

    else
    {
        cout<<"Different data"; 
    }
}

int main()
{
    userone obj1;
    usertwo obj2;
    string name, id;

    cout<<"enter name of userone : ";
    getline(cin, name);
    cout<<"enter id of userone : ";
    getline(cin, id);
    obj1.SetDataOne(name, id);

    cout<<"enter name of usertwo : ";
    getline(cin, name);
    cout<<"enter id of usertwo: ";
    getline(cin, id);
    obj2.SetDataTwo(name, id);

    usercheck(obj1, obj2);

    return 0;

}