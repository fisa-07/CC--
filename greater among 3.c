#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter Number:");
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
	if(c>b)
	{
		printf("%d is greater",c);
	}
	else
	printf("%d is greater",b);
	
	return 0;
}
