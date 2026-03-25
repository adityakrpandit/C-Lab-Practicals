#include <stdio.h>
#include <conio.h>

void main()
{
    int i,n,a[100],max,min;

    clrscr();

    printf("Enter n: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    max=min=a[0];

    for(i=1;i<n;i++)
    {
        if(a[i]>max) max=a[i];
        if(a[i]<min) min=a[i];
    }

    printf("Max=%d Min=%d",max,min);

    getch();
}