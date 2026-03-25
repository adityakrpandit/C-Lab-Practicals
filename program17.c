#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char str[100],rev[100];

    clrscr();

    printf("Enter string: ");
    gets(str);

    strcpy(rev,str);
    strrev(rev);

    if(strcmp(str,rev)==0)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    getch();
}