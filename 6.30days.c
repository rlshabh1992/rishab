#include<stdio.h>
int main()
{
    int n,days,months;
    printf("enter the nmber: ");
    scanf("%d",&n);
    months=n/30;
    printf("months is: %d \n",months);
    days=n%30;
    printf("days is: %d",days);

}