#include<stdio.h>
#include<conio.h>
class stack
{
int size,a[10],top;
public:
stack()
{
size=3;
top=-1;
a[size];
}
void push(int x)
{
if(top<size)
{
top++;
a[top]=x;
}
else if(top==size)
{
printf("\n stack overflow:\n");
}
}
void pop()
{
int x;
if(top==-1)
{
printf("\n stack under flow:\n");
}
else
{
a[top]=x;
top--;
}
}
void display()
{
printf("stack elements are:\n");
for(int i=top;i>=0;i--)
{
printf("%d",a[i]);
}
}
};
int main()
{
stack s;
s.push(2);
s.push(8);
s.push(9);
s.push(1);
s.pop();
s.display();
}