#include<stdio.h>
#include<conio.h>
void main()
{
int arr[100],s,c,n;
clrscr();
printf("enter number of elements in array\n");
scanf("%d",&n);
printf("enter %d integers\n",n);
for(c=0;c<n;c++)
scanf("%d",&arr[c]);
printf("enter a number tosearch\n");
scanf("%d",&s);
for(c=0;c<n;c++)
{
if(arr[c]==s)
{
printf("%d is present at location %d.\n",s,c+1);
break;
}
}
if(c==n)
printf("%d isn't present in the array.\n",s);
getch();
}