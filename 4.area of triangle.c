#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,area;
    printf("enter the value of a: ");
    scanf("%d",&a);
    printf("enter the value of b: ");
    scanf("%d",&b);
    printf("enter the value of c: ");
    scanf("%d",&c);
    s=a+b+c;
    printf("the value of s is:%d \n",s);
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("the area of triangle is:%d",area);
}