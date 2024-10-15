#include<stdio.h>
void main()
{
int i,arr1[5],arr2[5],sum,max,min,maax,minn;
clrscr();
printf("Enter array 1:");
for(i=0;i<5;i++)
{
 scanf("%d",&arr1[i]);
}
printf("Enter array 2:");
for(i=0;i<5;i++)
{
 scanf("%d",&arr2[i]);
 }
printf("Sum of two arrays is:");
for(i=0;i<5;i++)
{
 sum=arr1[i]+arr2[i];
 printf("%d\t",sum);
}
printf("\n");
max=min=arr1[0];
maax=minn=arr2[0];
for(i=0;i<5;i++)
{
 if(arr1[i]>max)
  max=arr1[i];
 if(arr1[i]<min)
  min=arr1[i];
 if(arr2[i]>maax)
   maax=arr2[i];
 if(arr2[i]<minn)
   minn=arr2[i];
 }
printf("Maximum of array1:%d\nMinimum of array1:%d\n",max,min);
printf("Maximum of array2:%d\nMinimum of array2:%d\n",maax,minn);
getch();
}
