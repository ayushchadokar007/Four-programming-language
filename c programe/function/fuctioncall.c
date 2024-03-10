#include<stdio.h>
void ayush()
{
    printf("hello hi");                           //funciton access
    printf("hy\n");
}

void ishu(int a, int b)
{
    int sum=a+b;                                 //function parameter
    printf("sum: %d\n", sum);
}

int viraj(int c, int d)
{
    int multi=c*d;                               //function prototype
    return multi;
}

int main()
{
    ayush();
    ishu(3, 6);
    int result=viraj(5, 12);
    printf("multi: %d", result);
    return 0;
}