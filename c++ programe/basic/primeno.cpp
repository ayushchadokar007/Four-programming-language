#include<iostream>
using namespace std;
int main()
{
    int number, i, j=0;
    cout<<"Enter number: ";
    cin>>number;

    for(i=1; i<=number; i++)
    {
        if(number % i == 0)
        {
            ++j;
        }
    }

    if(j==2)
    {
        cout<<"\n"<<number<<"is prime no.";
    }
    else
    {
        cout<<number<<"is not prime no.";
    }
    return 0;
}