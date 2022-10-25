#include<stdio.h>
int main()
{
	int n,ld,rev=0;
	printf("Enter Number=");
	scanf("%d",&n);
	while(n!=0)
	{
		ld=n%10;
		rev=10*rev+ld;
		n=n/10;
	}
	printf("Reverse is %d",rev);
	return 0;
}
