#include<stdio.h>
int great(int x,int y,int z)
{
int sum;
if((x<=y)&&(x<=z))
{
 sum=y+z;
}
if((y<=x)&&(y<=z))
{
 sum=x+z;
}
if((z<=x)&&(z<=y))
{
 sum=x+y;
}
return(sum);
}
int main()
{
 int a,b,c;
 clrscr();
 printf("Enter three numbers:");
 scanf("%d%d%d",&a,&b,&c);
 printf("Sum:%d",great(a,b,c));

 getch();
 return 0;
}

