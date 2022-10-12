#include<stdio.h>
#include<conio.h>
int main()
{
	int n,j,i,m;
    printf("enter the 1st number: ");
    scanf("%d",&n);
    printf("enter the 2nd number: ");
    scanf("%d",&m);
    for( i=n;  i<=m; i++)
    {
    	for(j=1;  j<=10; j++)
    	{
    		printf("%d x %d = %d \n",i,j,i*j);
		}
	}
}
