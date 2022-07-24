/*7. Car with data members to store ownership cost, warranty (by years), 
     seating capacity and fuel type (diesel or petrol).*/

#include<iostream>
using namespace std;
class Car
{
    private:
        float ownership_cost, warranty_years;
        int seating_capacity;
        string fuel_type;
    
        void SetDetails()
        {
            cout<<"Enter ownership cost : ";
            cin>>ownership_cost;
            cout<<"Enter warranty years : ";
            cin>>warranty_years;
            cout<<"enter seating capacity : ";
            cin>>seating_capacity;
            fflush(stdin);
            cout<<"Enter fuel type : ";
            getline(cin, fuel_type);

        }

    public:
        void display()
        {
            SetDetails();
            cout<<"OUTPUT DETAILS : \n";
            cout<<ownership_cost <<endl;
            cout<<warranty_years <<endl;
            cout<<seating_capacity <<endl;
            cout<<fuel_type <<endl;
        }

};

int main()
{
    Car object;
    object.display();

    return 0;
    
}