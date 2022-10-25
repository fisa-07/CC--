#include<stdio.h>
#include<math.h>
int main()
{
	int l,u,i,j,count=0;
	printf("Enter the lower range : "); scanf("%d",&l);
	printf("\n Enter the upper range : "); scanf("%d",&u);
	for(i=l;i<=u;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			count++;
		}
		if(count==2)
		printf("\n %d is prime no",i);
		count=0;
	}
	return 0;
}
