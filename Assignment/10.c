#include<stdio.h>
#include<conio.h>
int main()
{
    int day , month , year;
    printf("Enter a DD/MM/YYYY format\n");
    scanf("%d/%d/%d",&day,&month,&year);
    printf("Day-%d, Month-%d, Year-%d",day,month,year);
    return 0;

}