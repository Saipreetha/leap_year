#include<stdio.h>
main()
{
int a,i,temp=1,sum=1;
printf("\n enter the number:");
scanf("%d",&a);
for(i=1;i<=a;i++)
{temp=i;
sum=sum*i;
}
printf("\n the factorial of a given number is:%d",sum);
}1
