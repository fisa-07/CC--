#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter Range:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%3==0&&i%5==0)	
		printf("FizzBuzz\n");
		if(i%3==0&&i%5!=0)
		printf("Fizz\n");
		if(i%3!=0&&i%5==0)
		printf("Buzz\n");
		if(i%3!=0&&i%5!=0)
		printf("%d\n",i);
	}
	return 0;
}
