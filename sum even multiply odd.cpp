#include<stdio.h>
int main()
{
	int n,ld,sum=0,mult=1,multiple=0;
	printf("Enter Number ");
	scanf("%d",&n);
	for(n=n;n!=0;n=n/10)
	{
		ld=n%10;
		if(ld%2==0)
		{
			sum=sum+ld;
		}
		else
		{
			mult=mult*ld;
			multiple=mult;
		}
	}
	printf("Sum of even %d\n",sum);
	printf("Multiple of odd %d",multiple);
	
	return 0;
}
