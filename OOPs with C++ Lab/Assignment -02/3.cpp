/*
Q3.Write a program based on the above criteria to input name, address, amount of purchase and the type of purchase
 (L for Laptop and D for Desktop) by a customer. Compute and print the net amount to be paid by a customer along with his name
  and address.
(Hint: Discount = (discount rate / 100) * amount of purchase, Net amount = amount of purchase – discount)
(Use switch statement)
*/

#include<iostream>

using namespace std;

int main()
{
    string name, address;
    int amount_of_purchase;
    int type_of_purchase;
    float discount;
    int press=1;
    
    do
    {
        cout<< "\n\nenter amount of purchase  : ";
        cin>> amount_of_purchase;
        cout<< "Two types of purchase available : " << endl << "1 : Laptop" << endl << "2 : Desktop PC" << endl << "3 : exit" << endl;
        cout<< "enter the type of purchase : ";
        cin >> type_of_purchase;

        switch(type_of_purchase)
        {
        
            case 1  :  if(amount_of_purchase>=0 && amount_of_purchase<=25000)
                        {
                            discount =  0.0;
                        }

                        else if(amount_of_purchase>=25001 && amount_of_purchase<=57000)
                        {
                            discount =  5.0;
                        }

                        else if(amount_of_purchase>=57001 && amount_of_purchase<=100000)
                        {
                            discount =  7.5;
                        }

                        else if(amount_of_purchase>100000)
                        {
                            discount =  10.0;
                        }

                        break;
    
            case 2   :  if(amount_of_purchase>=0 && amount_of_purchase<=25000)
                        {
                            discount =  5.0;
                        }

                        else if(amount_of_purchase>=25001 && amount_of_purchase<=57000)
                        {
                            discount =  7.6;
                        }

                        else if(amount_of_purchase>=57001 && amount_of_purchase<=100000)
                        {
                            discount =  10;
                        }

                        else if(amount_of_purchase>100000)
                        {
                            discount =  15.0;
                        }

                        break;          

            default : cout<<"Error";            
    
        }

        discount = (discount/100)*amount_of_purchase;
        amount_of_purchase -= discount;
        cout<<"Amount of purchase on " << type_of_purchase << " is : " << amount_of_purchase;

        cout<<"\nPress 1 for CONTINUE or 0 for exit ";
        cin>>press;

    }while(press==1);

    return 0;

}