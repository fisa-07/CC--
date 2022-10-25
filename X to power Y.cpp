#include<stdio.h>
int main()
{
	int x,y,i,multi=1;
	printf("Enter Base and Power ");
	scanf("%d%d",&x,&y);
	for(i=1;i<=y;i++)
	{
		multi=multi*x;
	}
	printf("Answer %d",multi);
	
	return 0;
}
