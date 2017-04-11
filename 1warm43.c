#include<stdio.h>
int main()
{
int a,sum=0,c;
printf("Enter the number:");
scanf("%d",&a);
while(a!=0)
{
c=a%10;
sum=sum+(c*c*c);
a=a/10;
}
if(a==sum)
{
    printf("the entered number is armstrong number");
}
else
{
printf("entered number is not a armstrong number");
}
}

