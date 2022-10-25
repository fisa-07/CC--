#include<stdio.h>
int main()
{
	int n,cube,i;
	printf("Enter number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		cube=i*i*i;
		if(cube%3==0)
		{
			printf("%d\n",cube);
		}
	}
	
	return 0;
}
