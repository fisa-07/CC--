#include<stdio.h>
int main()
{
	int y;
	printf("Enter Year:");
	scanf("%d",&y);
	if(y%4==0&&y%400==0||y%100!=0)
	{
		printf("Year is Leap");
	}
	else
	{
		printf("Year is not Leap");
	}
	
	return 0;
}
