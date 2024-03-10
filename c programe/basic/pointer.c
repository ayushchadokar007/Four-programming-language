#include<stdio.h>
int main()
{
   int a=10, *p;
   p=&a;
   printf("hi %d", a);
   printf("hi %d\n", *p);
   printf("hi %d\n", &a);
   printf("hi %d\n", p);
     
    return 0;
    
    
}