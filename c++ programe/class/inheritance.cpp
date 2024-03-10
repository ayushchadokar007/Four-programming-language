#include<iostream>
using namespace std;
class Animal
{
    public:
    string Name;
    void eat()
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
        
        cout<<"\nname: "<<Name;
    }
};

int main()
{
    Dog d1;
    d1.Name="tomy";
    d1.eat();
    d1.display();
    return 0;
}