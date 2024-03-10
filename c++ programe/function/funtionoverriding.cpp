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
        cout<<"Good night";
    }
};

int main()
{
    Dog d1;
    d1.display();
    return 0;
}