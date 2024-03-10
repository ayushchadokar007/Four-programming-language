#include<iostream>
using namespace std;
int addnumber(int num1, int num2)
{
   int sum= num1+num2;
}

int multinumber(int num3,int num4)
{
    int multi=num3*num4;
}

int main()
{
    int sum=addnumber(1,2);
    cout<<"sum ="<<sum;

    int multi=multinumber(2,3);
    cout<<"\nmulti ="<<multi;
    return 0;
}
