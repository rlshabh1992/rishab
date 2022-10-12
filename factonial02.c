#include<stdio.h>
int main()
{
	int n,i,f;
	printf("enter the n: ");
	scanf("%d",&n);
	f=n;
	for( i=5;  i>=1;   i-- )
	
	{
	
	
		f = i*(f-1);


	}
   
   	printf("%d"  ,  n);
	return(0);
}
