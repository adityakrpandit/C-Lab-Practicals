#include <stdio.h>
#include <conio.h>

struct student
{
    char name[20];
    float score;
};

void main()
{
    struct student s[5],temp;
    int i,j;

    clrscr();

    for(i=0;i<5;i++)
    scanf("%s%f",s[i].name,&s[i].score);

    for(i=0;i<4;i++)
    for(j=i+1;j<5;j++)
    {
        if(s[i].score < s[j].score)
        {
            temp=s[i];
            s[i]=s[j];
            s[j]=temp;
        }
    }

    printf("Sorted by score:\n");

    for(i=0;i<5;i++)
    printf("%s %.2f\n",s[i].name,s[i].score);

    getch();
}