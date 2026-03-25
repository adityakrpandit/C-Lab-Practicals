#include <stdio.h>
#include <conio.h>
#include <string.h>

struct student
{
    int rollno;
    char name[20];
};

void main()
{
    struct student s[5],temp;
    int i,j;

    clrscr();

    for(i=0;i<5;i++)
    scanf("%d%s",&s[i].rollno,s[i].name);

    for(i=0;i<4;i++)
    for(j=i+1;j<5;j++)
    {
        if(strcmp(s[i].name,s[j].name)>0)
        {
            temp=s[i];
            s[i]=s[j];
            s[j]=temp;
        }
    }

    printf("Sorted by name:\n");

    for(i=0;i<5;i++)
    printf("%d %s\n",s[i].rollno,s[i].name);

    getch();
}