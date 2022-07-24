/*Q1. Define a class PRODUCT in C++ with the following specifications

Data members:
Pid – A string to store productid.
Pname - A string to store the name of the product.
Pcostprice – A decimal to store the cost price of the product
Psellingprice – A decimal to store Selling Price
Margin –  A decimal to be calculated as Psellingprice - Pcostprice
Remarks – To store ”Profit” if Margin is positive else “Loss” if Margin is negative

Member Functions:
A method SetRemarks() that assigns Margin as
Psellingprice - Pcostprice and sets Remarks as mentioned below:
Margin < 0 then Remarks is Loss
Margin >0  then Remarks is  Profit
A method Getdetails() to accept values for Pid , Pname , Pcostprice , Psellingprice and invokes SetRemarks() method.
A method Setdetails() that displays all the data members.  Make above program for 5 Products (Use Array of Object)*/


#include<iostream>

using namespace std;

class PRODUCT
{
    private:
        string P_ID, P_name, Remarks;
        float P_costprice, P_sellingprice, Margin;

    public: 
        void SetRemarks()
        {
            Margin = P_sellingprice - P_costprice;

            if(Margin<0)
            {
                Remarks="Profit";
            }

            else
            {
                Remarks="Loss";
            }

            cout<<"Margin is : " <<Margin << endl;

        }

        void GetDetails(string P_ID, string P_name, float P_costprice, float P_sellingprice)
        {
            PRODUCT::P_ID = P_ID;
            PRODUCT::P_name = P_name;
            PRODUCT::P_costprice = P_costprice;
            PRODUCT::P_sellingprice = P_sellingprice;

            SetRemarks();
        }

        void SetDetails()
        {
            cout<<"P_ID : "<< P_ID << endl;
            cout<<"P_name : "<< P_name << endl;
            cout<<"P_costprice : "<< P_costprice << endl;
            cout<<"P_sellingprice : "<< P_sellingprice << endl;
        }
      
};

int main()
{
    PRODUCT items[5];
    int i=0;
    string id, name;
    float costprice, sellingprice;

    for ( i = 0; i < 5; i++)
    {
        cout<<"Enter P_ID : ";
        cin>> id;

        cout<<"Enter P_name : ";
        cin>> name;

        cout<<"Enter P_costprice : ";
        cin>>costprice;

        cout<<"Enter P_sellingprice : ";
        cin>>sellingprice;

        items[i].GetDetails(id, name, costprice, sellingprice);

        cout<<"\n";

    }

    cout<<"\n";

    for ( i = 0; i < 5; i++)
    {
        items[i].SetDetails(); 
        cout<<"\n";  
    }

    return 0;
    
}
