#include<iostream>
using namespace std;
class car
{
    public:                              
    int gear, speed;
    car(int gear, int acc)
    {
        cout<<gear;
    }
};

int main()
{
    car c1(3,6);
    return 0;
}