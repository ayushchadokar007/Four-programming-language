#include<stdio.h>

int main()
{
    int a, b;
    printf("table\n");
    scanf("%d", &b);
    for(int i=0; i<=10; i++)
    {
         a=b*i;
        printf("%d * %d = %d\n", b, i, a);   
    }
    return 0;
}
//b *