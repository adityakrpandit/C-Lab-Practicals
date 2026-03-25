#include <stdio.h>
#include <conio.h>

void main()
{
    int i,n,a[100],sum=0;
    float avg;

    clrscr();

    printf("Enter n: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }

    avg = sum/n;

    printf("Total = %d\nAverage = %.2f",sum,avg);

    getch();
}
