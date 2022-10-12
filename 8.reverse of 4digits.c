#include<stdio.h>
int main()
{
    int n,a,b,c,d,r;
    printf("enter 4digit number: ");
    scanf("%d",&n);
    a=n%10;
    n=n/10;
    b=n%10;
    n=n/10;
    c=n%10;
    n=n/10;
    d=n;
    r=(a*1000+b*100+c*10+d*1);
    printf("the revere of 4digit of is %d",r);
}