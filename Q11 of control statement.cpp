#include<stdio.h>
#include<math.h>
int main()
{
	int x,p,i,r,sum=0;
	printf("Enter Number and Range ");
	scanf("%d%d",&x,&r);
	p=x;
	for(i=1;i<=r;i++){
		x=1/pow(x,i);
		sum=sum+x*pow(-1,i+1);
		x=p;
	}
	printf("Result %d",sum);
	return 0;
}
