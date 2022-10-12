#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,x,i;
	
	printf("enter a : ");
	scanf("%d",&a);
	printf("enter the b :  ");
	scanf("%d",&b);
	x = 1;
	
	for(i=1; i<=b ; i++)
	{
		x = a * x ;
	}
	    
	    printf("%d", x);
}
