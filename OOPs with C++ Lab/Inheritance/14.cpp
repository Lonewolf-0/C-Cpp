/*14.	Write a C++ program to calculate the percentage of a student using multi-level inheritance. 
Accept the marks of three subjects in base class. A class will derived from the above mentioned class which 
includes a function to find the total marks obtained and another class derived from this class which calculates 
and displays the percentage of student.*/

#include<iostream>
using namespace std;

class marks
{
    protected:
        float marks_maths, marks_english, marks_hindi;
    
        void Accept_Marks()
        {
            cout<<"enter marks for maths : ";
            cin>>marks_maths;
            cout<<"enter marks for english : ";
            cin>>marks_english;
            cout<<"enter marks for hindi : ";
            cin>>marks_hindi;
        }
};


class total : protected marks
{
    protected:
        float total=0;
        
        float total_calculate()
        {
            total = marks_english + marks_maths + marks_hindi;
            return total;
        }

        void display_total()
        {
            Accept_Marks();

            cout<<"\nMarks in maths : " << marks_maths << endl;
            cout<<"Marks in english : " << marks_english <<endl;
            cout<<"Marks in hindi : " << marks_hindi << endl;
        }
};


class percentage : protected total
{
    private:
        float percentage=0.0;

        float percentage_calculate()
        {
            percentage =  (total/300)*100;
            return percentage;
        }
    
    public:
        void display()
        {
            display_total();
            cout<<"Total marks : "<< total_calculate() << endl;
            cout<<"Percentage : "<< percentage_calculate() <<endl;
        }
};


int main()
{
    percentage student;
    student.display();
}