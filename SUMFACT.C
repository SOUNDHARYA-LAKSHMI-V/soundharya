#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
double sum=0.0,fact;
clrscr();
printf("Enter a number:");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
 fact=1;
 for(j=1;j<=i;j++)
 {
  fact=fact*j;
 }
 sum=sum+(double)i/fact;
}
printf("sum:%.5f\n",sum);
getch();
}
