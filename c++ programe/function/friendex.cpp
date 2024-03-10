#include<iostream>
using namespace std;
class number
{
    private:
    int num=5;
    friend void square(number);
};

void square(number obj)
{
    int sq=obj.num*obj.num;
    cout<<sq;
}

int main()
{
    number obj;
    square(obj);
    return 0;
}