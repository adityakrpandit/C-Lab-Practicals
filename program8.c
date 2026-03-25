#include <stdio.h>
#include <conio.h>

void main()
{
    int i,j,a[3][3];

    clrscr();

    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        printf("%d ",a[i][j]);

        printf("\n");
    }

    getch();
}