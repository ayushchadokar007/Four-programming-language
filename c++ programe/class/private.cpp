#include<iostream>
using namespace std;
class student
{
    private:
    int n;

    public:
    void setn(int number)
    {
        n=number;
    }

    int getn()
    {
        return n;
    }
};

int main()
{
    student y;
    y.setn(36);
    cout<<"number: "<<y.getn();
    return 0;
}