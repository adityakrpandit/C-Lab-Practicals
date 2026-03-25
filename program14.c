#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char str[100], rev[100];
    int i,len;

    clrscr();

    printf("Enter string: ");
    gets(str);

    strcpy(rev,str);
    strrev(rev);

    printf("Reverse using function = %s\n",rev);

    len = strlen(str);
    printf("Reverse without function = ");

    for(i=len-1;i>=0;i--)
        printf("%c",str[i]);

    getch();
}