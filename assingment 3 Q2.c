#include<stdio.h>
#include<math.h>
float fact(int n);
int main()
{
	float range,x,i,sum=0;
	printf("Enter value of x:");
	scanf("%f",&x);
	printf("Enter range:");
	scanf("%f",&range);
	for(i=1;i<=range;i++)
	{
		sum=sum+(pow(-1,i+1))*(pow(x,2*i-1))/(fact(2*i-1));
	}
	printf("Result is %.2f\n",sum);
	return 0;
	
}
float fact(int n)
{
	int i,mult=1;
	for(i=1;i<=n;i++)
	{
		mult=mult*i;
	}
	return mult;
}
