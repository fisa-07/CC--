#include<stdio.h>
int main()
{
	int n,a;
	printf("Enter Number:");
	scanf("%d",&n);
	if(n==0)
	{
		printf("Zero");
	}
	else
	switch(n>0)
	{
		case 1:
			printf("Positive");
		break;	
		case 0:
			printf("Negative");
			
					
	}
	return 0;
}
