/*Write a C++ program to input name, employee_id, department_id of an employee. Check the following condition 
a.) if first alphabet of name is not in capital letter then raise an exception
b.) if employee id is in negative then raise an exception.
c.) if department id is not in between 1 to 5, then raise an exception.
If all conditions are valid then display name, employee id and department id.*/


#include<iostream>
using namespace std;

int main()
{
    string name;
    int e_id, d_id, i=0;

    try
    {
        cout<<"Enter name : ";
        getline(cin, name);

        for(i=0; name[i]!='\0'; i++)
        {
            if(name[i]>='a' && name[i]<='z')
                throw name;
        }   

        cout<<"Enter employee id : ";
        cin>>e_id;

        if(e_id<0)
            throw e_id;
        
        cout<<"Enter department id : ";
        cin>>d_id;

        if(d_id>5 && d_id<1)
            throw d_id;
        
        cout<<"NAME : " <<name <<endl;
        cout<<"EMPLOYEE ID : " <<e_id <<endl;
        cout<<"DEPARTMENT ID : " <<d_id <<endl;

    }
    catch(string iname)
    {
        cout<<"Input in error.\n";
    }

    catch(...)
    {
        cout<<"Error in ID.\n";
    }

    return 0;
    
}