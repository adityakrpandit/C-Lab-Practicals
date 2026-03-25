#include <stdio.h>
#include <conio.h>

struct student
{
    char name[20];
    float grade;
};

void show(struct student s[5])
{
    int i;
    for(i=0;i<5;i++)
    {
        if(s[i].grade > 5.0)
            printf("%s\n",s[i].name);
    }
}

void main()
{
    struct student s[5];
    int i;

    clrscr();

    for(i=0;i<5;i++)
    scanf("%s%f",s[i].name,&s[i].grade);

    printf("Students with grade > 5:\n");
    show(s);

    getch();
}
