#include<iostream>
using namespace std;
class student
{
    public:
    string name;                                 //error.....
};

int main()
{
    student* ptr=new student();
    ptr->name="peter parker";
    cout<<"Name: "<<ptr->name;
    delete ptr;
    return 0;
}