#include <stdio.h>
#include <conio.h>

struct student
{
    int rollno;
    char name[20];
    float score;
};

void main()
{
    struct student s[5];
    int i;

    clrscr();

    for(i=0;i<5;i++)
    {
        printf("\nStudent %d\n",i+1);
        scanf("%d%s%f",&s[i].rollno,s[i].name,&s[i].score);
    }

    printf("\n--- Records ---\n");

    for(i=0;i<5;i++)
    {
        printf("%d %s %.2f\n",s[i].rollno,s[i].name,s[i].score);
    }

    getch();
}