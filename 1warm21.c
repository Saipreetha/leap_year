#include<stdio.h>
int main()
{
int a,temp,i;
printf("enter the number");
scanf("%d",&a);
while(a!=0)
{
a=temp;
a=a/10;
}
printf("the digits in it are:%d",temp);
}
