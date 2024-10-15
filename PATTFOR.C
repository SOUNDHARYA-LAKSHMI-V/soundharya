#include<stdio.h>
#include<conio.h>
void main()
{
int n,i=1,row,sp;
clrscr();
printf("Enter number of rows:");
scanf("%d",&n);
for(row=1;row<=n;row++)
{
 for(sp=1;sp<=n-row;sp++)
 {
  printf("\t");
 }
  for(sp=1;sp<=row;sp++)
  {
   printf("%d\t\t",i++);
  }
  printf("\n");
}
getch();
}