#include<iostream>
using namespace std;
class c
{
    public :
    int gear=5;
    void drive()
    {
        cout<<"Acceraletor";
    }
};

int main()
{
    c c1;
    cout<<"Gear= "<<c1.gear<<endl;
    c1.drive();
    return 0;
}