#include<iostream>
using namespace std;
int main()
{
    int row;
    cout<<"Enter row: ";
    cin>>row;

    for(int i=row; i>=1; --i)
    {
        for(int j=row; j<=i; j++)
        {
            cout<<"*";
            break;
        }
        cout<<endl;
    }
    return 0;
}