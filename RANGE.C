#include<stdio.h>
#include<conio.h>
void main()
{
int num,i=1,n,min,max;
clrscr();
printf("Enter number of elements:");
scanf("%d",&num);
printf("Enter 1:");
scanf("%d",&n);
max=min=n;
while(i<num)
{
 printf("Enter %d:",i+1);
 scanf("%d",&n);
 if(n>max) max=n;
 if(n<min) min=n;
 i++;
}
printf("Range is:%d",max-min);
getch();
}