#include<stdio.h>

int main()
{
    int x;
    printf("enter the number");
    scanf("%d",&x);
  x=x%10*100+x/10;
  
  printf("%d",x);


}