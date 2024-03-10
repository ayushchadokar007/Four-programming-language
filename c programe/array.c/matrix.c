#include<stdio.h>
int main()
{
    for (int i=0; i<=3; i++)
    {
        for(int j=0; j<=2; j++)
        {
            scanf("%d, %d", i, j);
        }
        printf("\n");
    }

    
    for (int i=0; i<=3; i++)
    {
        for(int j=0; j<=2; j++)
        {
            printf("%d, %d", i, j);
        }
        printf("\n");
    }
}