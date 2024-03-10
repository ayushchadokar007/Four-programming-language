#include<iostream>
using namespace std;
void breaker()
{
    int num=51;
    while(true)
    {
        if(num%7==0)
        {
            break;
        }
        ++num;
    }
    cout<<"number: "<<num;
}

void continuer()
{
    int number;
    
    for(int i=1; i<=5; i++)
    {
        cout<<"\nnumber: ";
        cin>>number;

    if(number<0)
    {
        continue;
    }
      cout<<"number: "<<number;
    }
}

int main()
{
    breaker();
    continuer();
    return 0;
}