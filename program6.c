#include <stdio.h>
#include <conio.h>

void main()
{
    int i,n,a[100];

    clrscr();

    scanf("%d",&n);

    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("Reverse:\n");

    for(i=n-1;i>=0;i--)
    printf("%d ",a[i]);

    getch();
}