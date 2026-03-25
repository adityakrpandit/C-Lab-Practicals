#include <stdio.h>
#include <conio.h>

struct complex
{
    int real,imag;
};

void main()
{
    struct complex c1,c2,sum;

    clrscr();

    scanf("%d%d",&c1.real,&c1.imag);
    scanf("%d%d",&c2.real,&c2.imag);

    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;

    printf("Sum = %d + %di",sum.real,sum.imag);

    getch();
}
