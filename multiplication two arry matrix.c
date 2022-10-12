#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100][100],b[100][100],c[100][100],i,j,k,r1,r2,c1,c2;
	printf("enter the 1st matrix order");
	scanf("%d%d",&r1,&c1);
	printf("enter the 2nd matrix order");
	scanf("%d%d",&r2,&c2);
	if(r2!=c1)
	{
		printf("multiplication not possible");
	}
     else
    {    printf("enter the 1st matrix element");
   	     for(i=0; i<r1; i++)
   	     {
   	     	for(j=0; j<c2; j++)
   	     	{ 
   	     	scanf("%d%d",a[i][j]);
				}
			}
	      printf("enter the 2nd matrix element");
	      for(i=0; i<r2; i++)
	      {
	      	for(j=0; j<c2; j++)
	      	{
	      		scanf("%d%d",b[i][j]);
			  }
		  }
		  for(i=0; i<r1; i++)
		  {
		  	for(j=0; j<c2; j++)
		       {
		       	c[i][j]=0;
		       	      for(k=0; k<r2; k++)
		       	         {
		       	  	       c[i][j]= c[i][j] + a[i][k] * b[k][j];					 }
			   }
					}		  
		  
    }
    printf("resultant matrix");
     for(i=0; i<r1; i++)
     {
     	for(j=0; j<c2; j++)
     	{
     		printf("%d",c[i][j]);
		 }
		 printf("\n");
	 }
}
