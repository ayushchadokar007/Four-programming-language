#include<iostream>
using namespace std;
int main()
{
    int num1 = 11, num2 = 23;
    cout<<"num1 : "<<num1<< endl;
    cout<<"num2 : "<<num2<< endl;
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout<<endl;
    cout<<"num1 : "<<num1<< endl;
    cout<<"num2 : "<<num2;
    return 0;
}