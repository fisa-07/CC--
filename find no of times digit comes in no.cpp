#include<stdio.h>
int main()
{
	int n,d,i,ld,count=0;
	printf("Enter number ");
	scanf("%d",&n);
	printf("Enter digit ");
	scanf("%d",&d);
	for(n=n;n!=0;n=n/10)
	{
		ld=n%10;
		if(ld==d)
		{
		    count=count+1;
			
		}
	}
	printf("%d is comes %d times",d,count);
	return 0;
}
