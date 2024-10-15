#include<stdio.h>
#include<conio.h>
void main()
{
int num,rem,sum=0,i=1;
printf("Enter a number to find octal equivalent:");
scanf("%d",&num);
while(num!=0)
{
 rem=num%8;
 num=num/8;
 sum=sum+rem*i;
 i=i*10;
}
printf("The octal equivalent ofis:%d",num,sum);
getch();
}
