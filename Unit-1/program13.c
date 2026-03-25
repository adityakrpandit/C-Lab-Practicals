#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char str[100];
    int len1,len2=0,i;

    clrscr();

    printf("Enter string: ");
    gets(str);

    len1 = strlen(str);

    for(i=0; str[i]!='\0'; i++)
        len2++;

    printf("Length using function = %d\n",len1);
    printf("Length without function = %d",len2);

    getch();
}
