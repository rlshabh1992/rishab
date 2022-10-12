#include<stdio.h>
int main()
{
    int n,a,b,c,d,s;
    printf("enter the 4digit number: ");
    scanf("%d",&n);
    a=n%10;
    n=n/10;
    b=n%10;
    n=n/10;
    c=n%10;
    n=n/10;
    d=n;
    s=a+b+c+d;
    printf(" the sum of 4digit number is:%d",s);
}