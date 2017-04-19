#include<stdio.h>
main()
{
int i,e,n,r,sum,temp;
printf("enter the starting range for armstrong number:");
scanf("%d",&n);
printf("enter the ending range for armstrong number:");
scanf("%d",&e);
for(i=n;i<=e;i++)
{
    temp=i;
    sum=0;
while(temp>0)
{
r=temp%10;
sum=sum+(r*r*r);
temp=temp/10;
}
if(sum==i)
{
printf("\n %d",sum);
}
}
}
