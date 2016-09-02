#include<stdio.h>
#include<conio.h>
void main()
{
char c;
clrscr()
scanf("%c",c);
if(c>='A'||c<='Z'||c>='a'||c<='z')
{
printf("It is character");
}
else
printf("It is not a character");
getch();
}
