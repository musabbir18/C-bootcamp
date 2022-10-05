#include<stdio.h>

int main()
{
    int x;
    printf("enter the number");
    scanf("%d",&x);
    int sum=0;
    int a=x%10;
    sum=sum+a;
    x=x/10;
     a=x%10;
    sum=sum+a;
    x=x/10;
    a=x%10;
    sum=sum+a;
    printf("%d",sum);



}