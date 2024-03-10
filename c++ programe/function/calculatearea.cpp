#include<iostream>
using namespace std;
class shape
{
    protected:
    double dimension;
    virtual double calculate_area()=0;
};

class square: public shape
{
    public:
    square(double side)
    {
        dimension = side;
    }
    double calculate_area()
    {
        return dimension*dimension;
    }
};

class circle: public shape
{
    public:
    circle(double radius)
    {
        dimension = radius;
    }
    double calculate_area()
    {
        return 3.14*dimension*dimension;
    }
};

int main()
{
    square square(4);
    circle circle(5);
    cout<<"Area square: "<<square.calculate_area();
    cout<<"\nArea circle: "<<circle.calculate_area();
    return 0;
}