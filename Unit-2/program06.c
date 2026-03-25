#include <stdio.h>
#include <conio.h>

struct student
{
    char name[20];
    int year;
};

void main()
{
    struct student s[5];
    int i;

    clrscr();

    for(i=0;i<5;i++)
    scanf("%s%d",s[i].name,&s[i].year);

    printf("Joined in 2019:\n");

    for(i=0;i<5;i++)
    {
        if(s[i].year==2019)
            printf("%s\n",s[i].name);
    }

    getch();
}
