#include<stdio.h>
int main()
{
    int arr[]={1,4,234,2,};
    printf("access 3 %d\n", arr[3]);
    arr[3]=21;
    printf("access 2 %d\n", arr[2]);
    printf("write array 1");
    scanf("%d", arr[1]);
    printf("access 1 %d\n", arr[1]);
   /* for(int a = arr)
    {
        printf("all array %d\n", a);
    }*/
    return 0;
}

