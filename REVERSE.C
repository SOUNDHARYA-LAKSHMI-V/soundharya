#include<stdio.h>
void main()
{
int num,rev;
clrscr();
printf("Enter a number to reverse:");
scanf("%d",&num);
while(num!=0)
{
 rev=num%10;
 num=num/10;
 printf("%d",rev);
}
getch();
}