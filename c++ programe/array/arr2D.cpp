#include<iostream>
using namespace std;
int main()
{
    int data[3][2]={
        {2,6},
        {3,8},
        {9,3}
    };

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<2; j++)
        {
            int a=data[i][j];
            cout<<a<<ends;
        }
        cout<<endl;
    }
    return 0;
    
}