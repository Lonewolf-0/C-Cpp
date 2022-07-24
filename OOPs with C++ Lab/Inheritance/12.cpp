/*12.  Write a C++ program to design a base class Person (name, address, phone_no). 
       Derive a class Employee (eno, ename) from Person. Derive a class Manager 
       (designation, department name, basic-salary) from Employee. Write a menu driven program to:
       a. Accept all details of 'n' managers.
       b. Display manager having highest salary. */


#include<iostream>
using namespace std;

class PERSON
{
    protected:
        string name, address;
        unsigned long long phone_number;
    
    public:
        void SetPerson()
        {
            cout<<"Enter name : ";
            cin>>name;
            fflush(stdin);
            cout<<"Enter address : ";
            getline(cin, address);
            fflush(stdin);
            cout<<"Enter phone_number : ";
            cin>>phone_number;
            fflush(stdin);
        }

        void display_person()
        {
            cout<<"NAME : "<< name << endl;
            cout<<"ADDRESS : " << address << endl;
            cout<<"PHONE NUMBER : "<< phone_number << endl;
        }
};


class Employee : public PERSON
{
    protected:
        string ename;
        int eno;
    
    public:
        void SetEmployee()
        {   
            SetPerson();

            cout<<"Enter employee name : ";
            getline(cin, ename);
            fflush(stdin);
            cout<<"Enter employee number : ";
            cin>>eno;
            fflush(stdin);
        }

        void display_employee()
        {
            display_person();
            cout<<"EMPLOYEE NAME : " << ename << endl;
            cout<<"EMPLOYEE NUMBER : " << eno << endl;
        }
};


class Manager : public Employee
{
    private:
        string designation, department_name;
        float basic_salary;
        int max=0;
    
    public:
        void SetValue()
        {
            SetEmployee();

            cout<<"Enter designation : ";
            getline(cin, designation);
            fflush(stdin);
            cout<<"Enter department name : ";
            getline(cin, department_name);
            fflush(stdin);
            cout<<"Enter basic salary : ";
            cin>>basic_salary;
            fflush(stdin);

            if(basic_salary>=max)
            {
                max=basic_salary;
            }
        }

        void display()
        {
            if(basic_salary==max)
            {
                display_employee();
                cout<<"DESIGNATION : " << designation << endl;
                cout<<"DEPARTMENT NAME : " << department_name << endl;
                cout<<"MAXIMUM SALARY : " << max << endl;
            }
        }
};


int main()
{
    int n, i;
    cout<<"Enter number of employees : ";
    cin>>n;

    Manager objects[n];
    
    for(i=0; i<n; i++)
    {
        objects[i].SetValue();
    }

    for(i=0; i<n; i++)
    {
        objects[i].display();
    }

    return 0;

}



