#include<stdio.h>
int main()
{
	int n,i,f=1;
	printf("enter the n: ");
	scanf("%d",&n);
	for( i=n;  i>=1;   i-- )
	
	{
	
	
		f = i*f;


	}
   
   	printf("%d"  ,  f);
	return(0);
}
