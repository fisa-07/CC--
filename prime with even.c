#include<stdio.h>
int main()
{
	int n,i,count=0,j;
	printf("Enter number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			if(i%j==0)
			count++;
		}
		if(count==2)
		printf("%d\n",i);
		count=0;
	}
	return 0;
}
