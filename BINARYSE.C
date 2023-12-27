#include<stdio.h>
#include<conio.h>
int binarysearch(int arr[],int l,int r,int x)
{
while(l<=r)
{
int m=l+(r-l)/2;
if(arr[m]==x)
return m;
if(arr[m]<x)
l=m+1;
else r=m-1;
}
return -1;
}
void main()
{
int arr[]={2,3,4,5,10,40};
int n=sizeof(arr)/sizeof(arr[0]);
int x=10;
int result=binarysearch(arr,0,n-1,x);
clrscr();
if(result==-1)
{
printf("element is not present in array");
}
else
{
printf("element is present at index %d",result);
}
getch();
}