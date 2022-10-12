#include<stdio.h>
#include<conio.h>
int main()
{
	int n,r,m,sum,i ;
	printf("enter the number: ");
	scanf("%d",&n);
	m = n;
	while(n>0)
	{
		r = n % 10;
		
		sum = sum * 10 + r;
		
		n = n /10;
	}
	 if(sum==m)
	 
	 {
	 	printf("paradron number");
	 }
	 
	 else
	 {
	 	printf("not");
	 }
}
