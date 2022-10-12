
int main()
{
	int a,b,c,d,e,p,r;
	printf("enter the 5 subject number:\n");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	p=(a+b+c+d+e)*100/250;
	r=p/10;
	switch(r)
	{
		case'0':
		case'1':
		case'2':
		case'3':
			printf("E");
		break;
		case'4':
			printf("D");
		break;
		case'5':
			print("C");
		break;
		case'6':
		case'7':
			printf("B");
		break;
		default:
			printf("A");
		}
	}
		
