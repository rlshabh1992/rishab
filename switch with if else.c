#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c,d,e,p,r;
	printf("enter the 5 subject number:\n");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if((a>=0&&a<=50)&&(b>=0&&b<=50)&&(c<=0&&c>=50)&&(d<=0&&d>=50)&&(e<=0&&e>=50))
{
		p=(a+b+c+d+e)*100/250;
	r=p/10;
	switch(r)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			printf("E");
		break;
		case 4:
			printf("D");
		break;
		case 5:
			printf("C");
		break;
		case 6:
		case 7:
			printf("B");
		break;
		case 8:
		case 9:
		case 10:
			printf("A");
		}
	}
		else
		    {
			printf("invaild number");
		}
		getch();
	}
