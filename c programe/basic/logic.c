#include<stdio.h>
int main()
{
    int a=23, b=13, c=41;
    if(a>b && a>c)
    {
        printf("a greater than both");
    }

    else if (a>b || a>c)
    {
        printf("a is great ");
    }

    else
    {
        printf("by");
    }
    return 0;
    
    
}