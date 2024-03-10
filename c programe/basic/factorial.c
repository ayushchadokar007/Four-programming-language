#include<stdio.h>
int main()
{
    int a=5, fac=1;
    for(int i=1; i<=a; i++)
    {
         fac=fac*i;
        
    }
    printf("factorial is %d", fac );
    return 0;
}