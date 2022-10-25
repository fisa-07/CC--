#include<stdio.h>
int main()
{
	float x,y;
	printf("Enter coordinate X Y:");
	scanf("%f%f",&x,&y);
	if(x>0&&y>0)
	printf("First quadrant");
	else if(x==0&&y>0)
	printf("+ve Y axis");
	else if(x==0&&y<0)
	printf("-ve Y axis");
	else if(y==0&&x<0)
	printf("-ve X axis");
	else if(y==0&&x>0)
	printf("+ve X axis");
	else if(x>0&&y<0)
	printf("Fourth quadrant");
	else if(x<0&&y<0)
	printf("Third quadrant");
	else if(x<0&&y>0)
	printf("Second quadrant");
	else
	printf("Origin");
	return 0;
}
