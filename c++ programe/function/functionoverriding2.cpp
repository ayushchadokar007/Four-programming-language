#include<iostream>
using namespace std;
class Animal
{
    public:
    void display()
    {
        cout<<"Hi\n";
        cout<<"Good Morning";
    }
};

class Dog : public Animal
{
    public:
    void display()
    {
        cout<<"Good night\n";
        // Animal::display();                   //right.......call directed
    }
};

int main()
{
    Dog d1;
    d1.display();
    d1.Animal::display();                     //right......only call by object
   //Animal::display();                      //not call by main function.....without object
    return 0;
}