#include<stdio.h>
main()
{
int a,i,tem=0;
printf("Enter the number ");
scanf("%d",&a);
for(i=0;i<=a;i++)
{
tem=tem+i;
}
printf("the sum of the numbers is:%d",tem);
}
