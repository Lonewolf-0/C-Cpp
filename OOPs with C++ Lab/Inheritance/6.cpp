/*6. We want to store the information of different vehicles. 
     Create a class named Vehicle with two data member named mileage and price. 
     Create its two subclasses.*/
#include<iostream>
using namespace std;

class vehicle
{
    protected:
        float mileage, price;
    
    public:
        void display()
        {
            cout<<"Price is : " << price <<endl;
            cout<<"Mileage is : " << mileage <<endl;
        }

};


class Mileage : public vehicle
{
    private:
        float distance_covered, fuel_used;
    public:

        void SetMileage()
        {
            cout<<"enter distance covered : ";
            cin>> distance_covered;
            cout<<"enter fuel used : ";
            cin>> fuel_used;
            mileage=distance_covered/fuel_used;
        }

};


class Price : public Mileage
{
    public:
        void SetPrice()
        {
            cout<<"enter price : ";
            cin>>price;
        }
        
};


int main()
{
    Price object;
    object.SetPrice();
    object.SetMileage();
    object.display();

    return 0;

}