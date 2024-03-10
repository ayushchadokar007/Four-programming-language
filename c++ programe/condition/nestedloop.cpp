#include<iostream>
using namespace std;
int main()
{
    int num1=37, num2=5, num3=7;

    if(num1>=num2 && num1>=num3)
    {
        cout<<"num1 is greater than both value";
    }

    else if (num2>=num1 && num2>=num3)
    {
        cout<<"num2 is greater than both value";
    }

    else
    {
        cout<<"num3 is greater than both value";
    }

    return 0;
}