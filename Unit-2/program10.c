#include <stdio.h>
#include <conio.h>

struct address
{
    char city[20];
};

struct student
{
    char name[20];
    struct address a;
};

void main()
{
    struct student s;

    clrscr();

    scanf("%s%s",s.name,s.a.city);

    printf("Name: %s\nCity: %s",s.name,s.a.city);

    getch();
}
