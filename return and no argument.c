#include<stdio.h>
int sum();
void main()
{
	int l;
	l = sum();
	getch();
}
int sum()
{
	int a, b, c;
	printf("enter the vlaue");
	scanf("%d%d", &a,&b);
	c = a + b ;
}
