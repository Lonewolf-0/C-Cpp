/*9. Make another two subclasses Audi and Ford of Car, each having a data member to store the model type. 
     Next, make two subclasses Bajaj and TVS, each having a data member to store the make-type. 
     Now, store and print the information of an Audi and a Ford car (i.e. model type, ownership cost, warranty, 
     seating capacity, fuel type, mileage and price.) Do the same for a Bajaj and a TVS bike.*/

#include<iostream>
using namespace std;

class Car
{
    protected:
        string model, fuel_type;
        float ownership_cost, mileage, price;
        int warranty, seating_capacity;
    
    private: 
        float distance_covered, fuel_used;
        
        void SetValue()
        {
            cout<<"Enter model : ";
            getline(cin, model);
            cout<<"Enter fuel type : ";
            getline(cin, fuel_type);
            cout<<"Enter ownership cost : ";
            cin>>ownership_cost;
            cout<<"Enter warranty : ";
            cin>>warranty;
            cout<<"Enter price : ";
            cin>>price;
            cout<<"Enter seating capacity : ";
            cin>>seating_capacity;
            cout<<"Enter distance covered : ";
            cin>>distance_covered;
            cout<<"Enter fuel used : ";
            cin>>fuel_used;
            mileage=distance_covered/fuel_used;
            fflush(stdin);
        }
    
    public:
        void display()
        {
            SetValue();

            cout<<"Model is : " << ownership_cost <<endl;
            cout<<"Fule type : " << fuel_type <<endl;
            cout<<"Ownership cost : " << ownership_cost <<endl;
            cout<<"Mileage : " << mileage << endl;
            cout<<"Price : " << price <<endl;
            cout<<"Warranty : " << warranty <<endl <<endl;
        }

};


class Audi : public Car
{
    public:
        Audi()
        {
            display();
        }
        
};


class Ford : public Car
{
    public:
        Ford()
        {
            display();
        }
        
};


int main()
{
    Audi object_audi;
    Ford object_ford;

    return 0;

}