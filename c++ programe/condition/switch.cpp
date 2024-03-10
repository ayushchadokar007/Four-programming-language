#include<iostream>
using namespace std;
int main()
{
    char op;
    float a=1, b=2;
    cout<<"enter the operator";
    cin>>op;

    switch(op) {
    case '+':
    cout<<"sum ="<<(a+b);
    break;

    case '-':
    cout<<"subtracte ="<<(a-b);
    break;

    case '*':
    cout<<"multiple ="<<(a*b);
    break;

    case '/':
    cout<<"divide ="<<(a/b);
    break;

    default:
    cout<<"invalide operator";
    } 
}