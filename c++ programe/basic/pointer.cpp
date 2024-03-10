#include<iostream>
using namespace std;
int main()
{
    int *ptr, a=8;
    cout<<"\na value= "<<a;
    cout<<"\na address= "<<&a;
    cout<<"\nptr address= "<<ptr;
    *ptr=a;
    cout<<"ptr value= "<<*ptr;
    return 0;
}