#include<stdio.h>
int main()
{
	int r,n=1,i,sum=0;
	printf("Enter Range ");
	scanf("%d",&r);
	for(i=1;i<=r;i++){
		sum=sum+n;
		n=n*10+1;
	}
	printf("Result %d",sum);
	return 0;
}
