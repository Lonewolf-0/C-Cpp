/*8. Bike with data members to store the number of cylinders, number of gears, cooling type(air, liquid or oil), 
     wheel type(alloys or spokes) and fuel tank size(in inches)*/

#include<iostream> 
using namespace std;

class bike
{
     private:
         int number_of_cylinders, number_of_gears;
         string cooling_type, type;
     
     public:
         void display()
         {
              cout<<"Enter number of cylinders : ";
              cin>>number_of_cylinders;
              cout<<"Enter number of gears : ";
              cin>>number_of_gears;
              cout<<"Enter cooling type : ";
              cin>>cooling_type;
              cout<<"Enter typpe : ";
              cin>>type;

              cout<<"\nOUTPUT DETAIILS : \n";
              cout<<number_of_cylinders <<endl;
              cout<<number_of_gears <<endl;
              cout<<cooling_type <<endl;
              cout<<type <<endl;
         }
};

int main()
{
     bike object;
     object.display();

     return 0;
}