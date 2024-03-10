#include<iostream>
using namespace std;
class parent
{
    public:
    void display_Name()
    {
        cout<<"Name: Ayush";
    }
};
class child : public parent
{};

int main()
{
    child a;
    a.display_Name();                //direct call to superclass....
    return 0;
}