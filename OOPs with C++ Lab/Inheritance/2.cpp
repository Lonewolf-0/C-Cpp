/*2. Make a class named Fruit with a data member to calculate the number of fruits in a basket. 
      Create two other class named Apples and Mangoes to calculate the number of apples and mangoes in the basket. 
      Print the number of fruits of each type and the total number of fruits in the basket.*/

#include<iostream>
using namespace std;

class Apple
{
    protected:
        int number_of_Apples;

    public:
        void SetAppleValue()
        {
            cout<<"enter number of apples : ";
            cin>> number_of_Apples;
        }

        void displayApple()     
        {
            cout<<"Total apples are : " << number_of_Apples <<endl;
        }

};

class Mangoes
{
    protected:
        int number_of_Mangoes;

    public:
        void SetMangoValue()
        {
            cout<<"enter number of mangoes : ";
            cin>> number_of_Mangoes;
        }
        
        void displayMango()
        {
            cout<<"Total mangoes are : " << number_of_Mangoes <<endl;
        }
        
};


class Fruit : public Mangoes, public Apple
{
    private:
        int total_fruits;

    public:
        Fruit()
        {
            total_fruits=0;
        }

        void Calculate()
        {
            total_fruits = number_of_Apples + number_of_Mangoes;
        }

        void displayFruit()
        {
            cout<<"Total fruits are : " << total_fruits <<endl;
        }

};


int main()
{
    Fruit object;

    object.SetAppleValue();
    object.displayApple();

    object.SetMangoValue();
    object.displayMango();

    object.Calculate();
    object.displayFruit();

    return 0;

}