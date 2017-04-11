#include<stdio.h>
main()
{
int a,b,temp=0;
printf("Enter the number ");
scanf("%d",&a);
for(b=0;b<=a;b++)
{
temp=temp+b;
}
printf("the sum of the numbers is:%d",temp);
}
