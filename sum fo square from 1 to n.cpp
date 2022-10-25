#include<stdio.h>
int main()
{
	int n,sum=0,i;
	printf("Enter number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=i*i+sum;
	}
	printf("Sum of square from 1 to %d is %d",n,sum);
	return 0;
}
