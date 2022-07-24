// 1. Define a class named Test and find the biggest of 3 numbers using friend function.

#include<iostream>
using namespace std;

class Test
{
    private:
        int n1, n2, n3;

    public:
        void operator()(int a, int b, int c)
        {
            n1=a;
            n2=b;
            n3=c;
        } 

        friend int biggest(Test);

};

int biggest (Test obj)
{
    int max;
    max=(obj.n1>obj.n2)?((obj.n1>obj.n3)?obj.n1:obj.n3):((obj.n2>obj.n3)?obj.n2:obj.n3);
    return max;
}

int main()
{
    Test obj;
    int n1, n2, n3, result;

    cin>>n1>>n2>>n3;

    obj(n1, n2, n3);

    result=biggest(obj);

    cout<<"Result is : " << result << endl;

    return 0;

}