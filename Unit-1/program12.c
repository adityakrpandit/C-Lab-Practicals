#include <stdio.h>
#include <conio.h>

void main()
{
    char name[50];
    int i=0;

    clrscr();

    scanf("%s",name);

    while(name[i]!='\0')
    {
        printf("%c\n",name[i]);
        i++;
    }

    getch();
}
