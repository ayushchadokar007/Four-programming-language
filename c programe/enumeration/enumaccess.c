#include<stdio.h>
enum week {sunday, monday, tuesday, wednesday, thursday, friday, saturday};
int main()
{
    enum week today;
    today=monday;
    printf("day %d", today);
}