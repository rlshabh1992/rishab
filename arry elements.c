#include<stdio.h>
#include<conio.h>
 int main()
 { 
 	  int  i , m , arr[100] , even=0 , odd=0;
 	  printf("enter the total number the element: ");
 	  scanf("%d" , m);
 	  for(i=0 ; i<m; i++)
 	  {
 	  	arr[i] = i ;
 	  }
		 
 	  for(i=0 ; i<m ; i++)
 	  {
 	  	if(arr[i]%2==0)
 	  	{
 	  	
		   even = even + arr[i] ; 
	    
		}
	    
		   printf("sum of even is %d", even);
	     
	     for(i=0 ; i<m ; i++)
	     {
	     	if(arr[i]%2==1)
	     	{
	     		
	     		odd = odd + arr[i] ;
			}
			  
			  printf("sum of odd is %d" , odd);
	     	
		 }
   	  }
}
	    
	    
	   
	   
