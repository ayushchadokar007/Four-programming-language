#include<iostream>
using namespace std;
class c
{
    public:
    int gear = 3;
};

int main()
{
    c c1;
    c c2;
    cout<<c1.gear;
    int gear = 5;
    cout<<endl<<c2.gear;
    return 0;
}