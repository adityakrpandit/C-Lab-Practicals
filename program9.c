#include <stdio.h>
#include <conio.h>

struct date
{
    int d,m,y;
};

void main()
{
    struct date d1,d2;

    clrscr();

    scanf("%d%d%d",&d1.d,&d1.m,&d1.y);
    scanf("%d%d%d",&d2.d,&d2.m,&d2.y);

    if(d1.d==d2.d && d1.m==d2.m && d1.y==d2.y)
        printf("Equal");
    else
        printf("Not Equal");

    getch();
}