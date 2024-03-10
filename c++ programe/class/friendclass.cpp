#include<iostream>
using namespace std;
class Animal
{
    private:
    int legs;
    friend class dog;
    public:
    Animal(): legs(4){}
};

class dog
{
    public:
    Animal a1;
    void legs()
    {
        cout<<"legs: "<<a1.legs;
    }
};

int main()
{
    dog d1;
    d1.legs();
    return 0;
}