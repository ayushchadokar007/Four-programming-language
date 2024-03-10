#include<stdio.h>
//template=0
int main()
{
    int num1 = 11, num2 = 23;
    printf("num1 befor: %d\n", num1);
    printf("num2 befor: %d\n", num2); 

    int temp = num1;
    num1 = num2;
    num2 = temp;

    printf("num1 after: %d\n", num1);
    printf("num2 after: %d\n", num2);
    return 0;
}