#include <stdio.h>
#include <conio.h>

void main()
{
    int i,n,a[100],b[100];

    clrscr();

    scanf("%d",&n);

    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    b[i]=a[i];

    printf("Copied array:\n");

    for(i=0;i<n;i++)
    printf("%d ",b[i]);

    getch();
}
