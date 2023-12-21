#include<stdio.h>
#include<conio.h>
void fibonacci(int n)
{
int f=0,s=1,ne,i;
for(i=0;i<=n;i++)
{
if(i<=1)
{
ne=i;
}
else
{
ne=f+s;
f=s;
s=ne;
}
printf("%d",ne);
}
}
void main()
{
int num;
clrscr();
scanf("%d",&num);
fibonacci(num);
getch();
}