#include<iostream>
using namespace std;
int aread;
class area
{
    private:
    int length, breadth;                 //wrong.......

    friend find_area(area)
    public:
    area(): length(3), breadth(6)
    {}
};

int find_area(area d)
{
    int area = d.length * d.breadth;
    return 0;
}
 
int main()
{
    area d;
    cout<<"Area: "<<find_area(d);
    return 0;
}