#include <stdio.h>
#include <conio.h>

struct st
{
    int a;
    float b;
};

union un
{
    int a;
    float b;
};

void main()
{
    struct st s;
    union un u;

    clrscr();

    printf("Structure size = %d\n",sizeof(s));
    printf("Union size = %d",sizeof(u));

    getch();
}
