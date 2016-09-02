#include<stdio.h>
 
void main()
{
     int a = 11, b = 3;
     a = a + b; 
     b = a - b;
     a = a -b;
     printf("\na=%d,b=%d", a, b);
}
