#include<stdio.h>
#include<conio.h>
void main()
{
int n,first=0,second=1,nxt,i;
clrscr();
printf("Enter:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
 if(i<=1)
  nxt=i;
 else
 {
  nxt=first+second;
  first=second;
  second=nxt;
}
}
printf("Fibonacci sequence is %d",nxt);

getch();
}