#include<stdio.h>
int main()
{
char str[100];
int i,upp=0,low=0,spl=0;
printf("\n enter the statement:");
scanf("%[^\n]",&str);
for(i=0;str[i]!='\0';i++)
{
upp=upp+(str[i]>='A'&&str[i]<='Z');
low=low+(str[i]>='a'&&str[i]<='z');
spl=spl+(str[i]!=((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z')));
}
printf(" upper case are:%d",upp);
printf("lower case are:%d",low);
printf("special cases:%d",spl);
}
