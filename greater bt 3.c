#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter Numbers:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(b>c)
		{
			printf("%d is greater",a);
		}
		else if(c>a)
		{
			printf("%d is greater",c);
		}
	}
	else if(b>c)
	{
		printf("%d is greater",b);
	}
	else 
	{
		printf("%d is greater",c);
	}
	return 0;
}
