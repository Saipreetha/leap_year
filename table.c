#include<stdio.h>
int main()
{
  int n,j,k;
  printf("Enter a number\n");
  scanf("%d",&n);
  printf("Table of %d is as\n",n);
  for(j=1;j<=10;j++)
  {
    k=n*j;
    printf(" %d \n",k);
  }

  getch();
  return 0;
}
