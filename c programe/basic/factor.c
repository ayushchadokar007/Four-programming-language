#include<stdio.h>
int main()
{
    int a=18;
    for(int i=1; i<=a; i++)
    {
        if (a%i==0)
        {
            printf("factor is %d\n", i);
        }
    }
    
    
}