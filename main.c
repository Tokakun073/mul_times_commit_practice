#include <stdio.h>
#include <string.h>

struct student
{
   int age;
   char *name;
};

struct  teacher
{
    int age;
    char *name;
    int salary;
};




int main()
{
    printf("1111\n");
    printf("2222\n");
    printf("3333\n");
    printf("4444\n");
    printf("5555\n");
    printf("6666\n");
    printf("7777\n");
    printf("8888\n");
    printf("9999\n");
    printf("AAAA\n");
    int a[3]={0};
    int b[3]={0};

    struct student std1;
    std1.age =17;
    strncpy(std1.name,"haha",5);
    printf("age=%d,name=%s\n",std1.age,std1.name);
}