#include<stdio.h>
int main()
{
	float u,r;
	printf("Enter consuption in units: ");
	scanf("%f",&u);
	if(u<0)
	{
		printf("Invalid input");
	}
	if(u>=0&&u<=200)
	{
		r=u*0.5;
		printf("Amount:%f",r);
	}
	if(u>=201&&u<=400)
	{
		r=100+0.65*(u-200);
		printf("Amount:%f",r);
	}
	if(u>=401&&u<=600);
	{
		r=250+0.8*(u-400);
		printf("Amount:%f",r);
	}
	if(u>600)
	{
		r=425+1.25*(u-600);
		printf("Amount:%f",r);
	}
	return 0;
}
