#include<stdio.h>

#define name "倪西口"
#define age 23

const char namestr[] = "倪西口";
const int ageint = 23;

void main()
{
    printf("我叫%s,今年%d岁", name, age);
    printf("\n我叫%s,今年%d岁", namestr,ageint);

    getchar();
} 
