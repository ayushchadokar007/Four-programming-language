#include<stdio.h>
int main()
{
    int n;
   printf("what's today");
   scanf(" %d", &n);
    switch(n)
    {
        case 1: 
            printf("sunday");
            break;

        case 2:
            printf("tuesday");
            break;

        case 3:
            printf("friday");
            break;

        default:
            printf("bahad me ja");
    }
}