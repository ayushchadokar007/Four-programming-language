#include<iostream>
using namespace std;
void addnumber(int num1, int num2)
{
   int sum= num1+num2;
   cout<<"sum ="<<sum;
}

void multinumber(int num3, int num4)
{
   int multi=num3*num4;
   cout<<"multi= "<<multi;
}

int main()
{
    addnumber(1,2);
    multinumber(2,3);
    return 0;
}
