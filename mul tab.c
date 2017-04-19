#include<stdio.h>
main()
{
int a,i,c;
printf("Enter the table number:");
scanf("%d",&a);
for(i=0;i<=10;i++)
{
printf("%d * %d = %d",i,a,i*a);
}
}
