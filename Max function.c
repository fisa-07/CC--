#include<stdio.h>
int max(int a,int b,int c);
main()
{
	int a,b,c;
	printf("Enter No:");
	scanf("%d%d%d",&a,&b,&c);
	max(a,b,c);
}
int max(int a, int b,int c)
{
	if(a>b)
	{
		if(b>c)
		{
			printf("%d",a);
		}
		else if(c>a)
		{
			printf("%d",c);
		}
	}
	else if(b>c)
	{
		printf("%d",b);
	}
	else 
	{
		printf("%d",c);
	}
	
}
