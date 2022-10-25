#include<stdio.h>
int main()
{
	int x,y,a;
	printf("Enter Numbers:");
	scanf("%d%d",&x,&y);
	a=x;
	x=y;
	y=a;
	printf("%d %d",x,y);
	return 0;
}
