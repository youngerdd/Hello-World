#include<stdio.h>

void main()
{ 
    int a = 3, b = 2;
    int c;
    c = a;
    a = b;
    b = c;
    printf("%d %d", a, b);
   
    getchar();
}
