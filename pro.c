#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i,n,c,temp,b[5],u,o;
clrscr();
printf("Enter how many numbers to sort");
scanf("%d",n);
for(i=0;i<n;i++)
{
scanf("%d",a[i]);
}
for(int j=0;j<n;j++)
{
c=a[i];
while(c>0)
{
temp=c%2;
b[i]+=temp;
c=c/2;
}
}
for(int h=0;h<n;h++)
{
if(b[h]<b[h+1])
{
u=b[h];
b[h]=b[h+1];
b[h+1]=u;
o=a[h];
a[h]=a[h+1];
a[h+1]=o;
}
}
for(int g=0;g<n;g++)
{
printf("%d",a[g]);
}
getch();
}
