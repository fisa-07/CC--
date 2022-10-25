#include<stdio.h>
int main()
{
	int r,n=1,i,sum=0;
	printf("Enter Range ");
	scanf("%d",&r);
	for(i=0;i<=r-1;i++){
		n=n+i;
		sum=sum+n;
	}
	printf("Result %d",sum);
	return 0;
}
