#include<stdio.h>
void sum ();
void main()
{
	sum();
	getch();
	
}
void sum()
{
	int a ,b ,c ;
	printf("enter the values");
	scanf("%d%d",&a,&b);
	c = a + b ;
	printf("sum = %d", c);
	
}
