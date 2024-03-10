#include<iostream>
using namespace std;
class rectangle
{
    public:                                 
    int length, breadth;
    rectangle(int l, int b)
    {
        length=l;
        breadth=b;
    }

    void getarea()
    {
      int area = length * breadth;
      cout<<"Area: "<<area;
    }
};

int main()
{
    rectangle rect(7, 7);
    rect.getarea();
    return 0;
}