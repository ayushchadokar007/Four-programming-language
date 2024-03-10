#include<iostream>
using namespace std;
class Car
{
    public:
    int gear, speed;
    Car(int g, int s)
    {
        gear= g;                           //one class two object.....
        speed= s;
    }
};

int main()
{
    Car c1(43,23);
    Car c2(84, 48);
    cout<<"gear 1: "<<c1.gear;
    cout<<"\n speed 1: "<<c1.speed;
    cout<<endl;
    cout<<"\n gear 2: "<<c2.gear;
    cout<<"\nspeed 2: "<<c2.speed;
    return 0;
}