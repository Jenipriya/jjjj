#include<stdio.h>
#include<conio.h>
void main()
{
char c;
clrscr()
scanf("%c",c);
if(c>='A'||c<='Z'||c>='a'||c<='z')
{
printf("It is Alphabet");
}
else
printf("It is not a Alphabet");
getch();
}
