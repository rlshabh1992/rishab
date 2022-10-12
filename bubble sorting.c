#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[100],m,i,j,t;
	printf("enter the total elements enter:");
	scanf("%d",&m);
	printf("enter the arry elements:");
	for(i=0 ; i<m; i++)
	{
	scanf("%d", &arr[i]);
	}
	printf("unsortin arry elements:");
	for(i=0 ; i<m ; i++)
	{
		printf("\n%d", arr[i]);
	}
	for( i=0 ; i<m ; i++)
	{
		for(j=i+1 ; j<m ; j++)
		{
			if(arr[i]>arr[j])
			{
				t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;			
				}
		}
		printf("\n");
		
	}
	printf("sorting elements:");
	for(i=0 ; i<m ; i++)
	{
		printf("\n%d", arr[i]);
	}
	
}

	
	
