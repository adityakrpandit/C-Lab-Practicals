#include <stdio.h>
#include <conio.h>

void main()
{
    char str[100];
    int i,spaces=0,vowels=0;

    clrscr();

    printf("Enter string: ");
    gets(str);

    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]==' ')
            spaces++;

        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
           str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
            vowels++;
    }

    printf("Spaces = %d\nVowels = %d",spaces,vowels);

    getch();
}
