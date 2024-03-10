#include<iostream>
using namespace std;
class parent
{
    protected:
    string name=" ";
    void display_Name()
    {
        cout<<"Name: "<<name;
    }
};

class child : public parent
{                                                        //in protected variable alse call by inheriter it was not call by main and outside of class
    public:
    void initialized_name()
    {
    name="ayush";
    display_Name();
    }
};

int main()
{
    child a;
    a.initialized_name();
    return 0;
}