#include<stdio.h>

int main()
{
    int x;
    printf("enter the number");
    scanf("%d",&x);
    printf("unit digit is %d is %d",x,x%10);
    printf("\n");
    return 0;
}