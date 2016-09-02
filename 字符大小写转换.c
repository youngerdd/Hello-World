#include<stdio.h>

void main()
{
    char c;
    c = getchar();
    printf("%c,%d", c,c);
    c = c + 32;
    printf("\n%c,%d", c,c);

    getchar();
}
