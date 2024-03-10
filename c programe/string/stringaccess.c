#include<stdio.h>
#include<string.h>
 char name[50], nam[30];
    char a[]="ayush chadokar";
    char b[]="yash";
void func()
{
   printf("%s \n", a);
   printf("%s\n", b);
   printf("length: %d\n", strlen(a));
   printf("lowercase: %s\n", strlwr(a));
   printf("uppercase: %s \n", strupr(a));
   printf("swap: %s \n",strcat(a, b));
   printf("append: %s\n", strcpy(a, b));
   printf("reverse: %s\n", strrev(a));
   printf("compare: %lu\n", strcmp(a, b));          //error compare

}

void old_name()
{
   
    printf("string name: %s\n", a);

    printf("the string are \"Good string\" turtorial\n");

    printf("Enter name: ");
    scanf("%s\n", name);
    printf("name: %s\n\n", name);
}

void new_name()
{
     printf("Enter new name: ");
    fgets(nam, sizeof(nam), stdin);
    printf("\nname old: ");
    puts(nam);                                    //fgets error note work, puts result is surname of old
}


int main()
{
    old_name();
    new_name();
     //func(); 
     return 0;    
  

}