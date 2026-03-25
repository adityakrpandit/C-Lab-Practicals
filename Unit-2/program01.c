#include <stdio.h>
#include <conio.h>

struct student
{
    int rollno;
    char name[20];
    char dept[40];
    int year;
    float score;
};

void main()
{
    struct student s;

    clrscr();

    printf("Enter Roll No: ");
    scanf("%d",&s.rollno);

    printf("Enter Name: ");
    scanf("%s",s.name);

    printf("Enter Department: ");
    scanf("%s",s.dept);

    printf("Enter Year: ");
    scanf("%d",&s.year);

    printf("Enter Score: ");
    scanf("%f",&s.score);

    printf("\n--- Student Details ---\n");
    printf("Roll No: %d\n",s.rollno);
    printf("Name: %s\n",s.name);
    printf("Department: %s\n",s.dept);
    printf("Year: %d\n",s.year);
    printf("Score: %.2f",s.score);

    getch();
}
