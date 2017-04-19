#include<stdio.h>
main()
{
int b,i,temp=1,sum=1;
printf("\n enter the number:");
scanf("%d",&b);
for(i=1;i<=b;i++)
{temp=i;
sum=sum*i;
}
printf("\n the factorial of a given number is:%d",sum);
}
