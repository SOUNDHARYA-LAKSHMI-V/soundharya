#include<stdio.h>
int perfect(int n)
{
 int i,rem;
 int sum=0;
 for(i=1;i<n;i++)
 {
 rem=n%i;
 if(rem==0)
  sum=sum+i;
  }
   return(sum);
  }
int main()
{
  int n;
  clrscr();
  printf("Enter number to check perfect or not:");
  scanf("%d",&n);
  if(perfect(n)==n)
   printf("The number is a perfect number");
  else
   printf("The number is not a perfect number");
   getch();
   return 0;
}
