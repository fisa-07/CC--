#include<stdio.h>
#include<math.h>
int main()
{
	int x,p,i,r,sum=0;
	printf("Enter Number and Range ");
	scanf("%d%d",&x,&r);
	p=x;
	for(i=1;i<=r;i++){
		x=pow(x,i);
		sum=sum+x;
		x=p;
	}
	printf("Result %d",sum);
	return 0;
}
