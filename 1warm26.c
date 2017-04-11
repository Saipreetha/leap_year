#include<stdio.h>
int main()
{
int a,b,c,d;
printf("enter the values for a,b,c:");
scanf("%d %d %d",&a,&b,&c);
d=a > b?( a > c ? a : c):(b > c ? b : c) ;
printf("the greater value is :%d",d);
}
