#include <stdio.h>
#include <conio.h>

void main()
{
    int i, n, a[100];

    clrscr();

    printf("Enter number of elements: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    getch();
}