#include<stdio.h>
int main()
{
	int x,y,n;
	printf("Enter value of n:");
	scanf("%d",&n);
	printf("Enter value of x:");
	scanf("%d",&x);
	switch(n)
	{
		case 1:
			printf("%d",1+x*x);
			break;
		case 2:
			printf("%d",1+x/n);
			break;
		case 3:
			printf("%d",1+2*x);
			break;
		default:
		    printf("%d",1+n*x);	
	}
	return 0;
}
