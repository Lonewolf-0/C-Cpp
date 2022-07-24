/*13. Write a C++ program to define a base class Item (item-no, name, price). 
      Derive a class Discounted-Item (discount-percent). A customer purchases 'n' items. 
      Display the item-wise bill and total amount using appropriate format.*/

#include<iostream>
using namespace std;

class Item
{
    protected:
        int item_no;
        string name;
        float price;
    
        void set_item()
        {
            cout<<"enter item number : ";
            cin>>item_no;
            fflush(stdin);
            cout<<"enter item name : ";
            getline(cin, name);
            fflush(stdin);
            cout<<"enter price : ";
            cin>>price;
            fflush(stdin);
        }
};

class discounted_item : protected Item
{
    private:
        float discount;

        void discount_calculate()
        {
            discount = 0.1*price; 
        }
    
    public:
        void display()
        {
            set_item();
            cout<<"Item name : " <<name <<endl;
            cout<<"Item number : " <<item_no <<endl;
            cout<<"Price : " << price <<endl;
            discount_calculate();
            cout<<"Discount offered : " << discount <<endl <<endl;
        }

};


int main()
{
    int n, i;
    cout<<"enter limit : ";
    cin>>n;

    discounted_item object[n];

    for(i=0; i<n; i++)
    {
        object[i].display();
    }

    return 0;

}


