#include<stdio.h>
void sum(int,int);
void main()
{
	int a,b;
	printf("enter the number");
	scanf("%d%d",&a,&b);
	 sum(a,b);
	getch();
}
void sum(int x,int y)
{
	int c;
	c = x + y ;
	printf(" sum = %d ",c);
}
