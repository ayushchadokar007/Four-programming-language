#include<stdio.h>
int main()
{
     int a, b;
    printf("Enter two no.");
    scanf("%d\n%d", &a, &b);

    if(a>b)
    {
        printf("a is greater than b");
    }


    else if (a<b)
    {
        printf("b is greater than a");
    }

    else
    {
        printf("invalide number");
    }
    return 0;
}