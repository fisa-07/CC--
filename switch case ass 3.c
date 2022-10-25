#include<stdio.h>
int main()
{
	int n,x;
	printf("Value of x:");
	scanf("%d",&x);
	printf("Enter Choice:");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("%.2f",1+x*x*1.0);
		break;
		case 2:
			printf("%.2f",1+x/2.0);
		break;
		case 3:
			printf("%.2f",1+2.0*x);
		break;
		default:
			printf("%.2f",1+1*n*x*1.0);
	}
	return 0;
}
