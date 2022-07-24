/*5. Write a program with a mother class animal. 
     Inside it define a name and an age variables, and set_value() function.
     Then create two bases variables Zebra and Dolphin which write a message telling the age, 
     the name and giving place of origin and color.*/

#include<iostream>
using namespace std;

class animal
{
     private:
         int age;
         string name;

     public:
         void SetValue(int iage, string iname)
         {
              age=iage;
              name=iname;
         } 

         void display()
         {
              cout<<"Name : " << name << endl;
              cout<<"Age : " << age << endl;
         }

};

int main()
{
     animal zebra, dolphin;
     int iage;
     string iname;
     
     cout<<"enter name for zebra : ";
     getline(cin, iname);
     cout<<"enter age for zebra : ";
     cin>>iage;

     zebra.SetValue(iage, iname);
     zebra.display();

     fflush(stdin);

     cout<<"enter name for dolphin : ";
     getline(cin, iname);
     cout<<"enter age for dolphin : ";
     cin>>iage;

     dolphin.SetValue(iage, iname);
     dolphin.display();
     
     fflush(stdin);

     return 0;
}