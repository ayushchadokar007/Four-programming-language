#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter number\n");
    
    printf("a = ");
    scanf("%d", &a);

    printf("b = ");
    scanf("%d", &b);

    printf("c = ");
    scanf("%d", &c);
    if(a>b)
    {
        if(a>c)
        {
            printf("a is largest number");
        }
        else
        {
            printf("c is largest number");
        }
    }

    else if(b>a)
    {
        if(b>c)
        {
            printf("b is largest number");
        }
        else
        {
            printf("c is largest number");
        }
    }

    else
    {
        printf("Invalid number");
    }
    return 0;
}