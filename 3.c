#include<stdio.h>

int main()
{
    int x,y;
    printf("enter the two number");
    scanf("%d%d",&x,&y);
    
    x=x+y;
    y=x-y;
    x=x-y;
    

    printf("x=%d,y=%d",x,y);
}