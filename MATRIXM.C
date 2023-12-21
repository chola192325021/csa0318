#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k;
int r1,r2,c1,c2;
int a[10][10],b[10][10],c[10][10];
clrscr();
printf("enter the order of the matrix A\n");
scanf("%d%d",&r1,&c1);
printf("enter the order of the matrix B\n");
scanf("%d%d",&r2,&c2);
if(c1!=r2)
{
printf("matrix multiplication is not possible\n");
}
printf("enter the elements of matrix A\n");
for(i=0;i<r1;i++)
for(j=0;j<c1;j++)
scanf("%d",&a[i][j]);
printf("enter the elements of matrix B\n");
for(i=0;i<r2;i++)
for(j=0;j<c2;j++)
scanf("%d",&b[i][j]);
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
c[i][j]=0;
for(k=0;k<c1;k++)
{
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
}
}
printf("product of the matrix C\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}
getch();
}