#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,m;
clrscr();
printf("Enter the number to check prime:");
scanf("%d",&n);
for(i=2;i<n;i++)
{
 if(n%i==0)
 {
  m=1;
  break;
 }
}
if(m==1)
 printf("Number is not prime");
else
 printf("Number is prime");
getch();
}