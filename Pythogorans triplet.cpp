#include<stdio.h>
int main()
{
	int x,y,z,i,n;
	printf("Enter Range ");
	scanf("%d",&n);
	for(x=1;x<=n-2;x++)
	{
		for(y=x+1;y<=n-1;y++)
		{
			for(z=y+1;z<=n;z++)
			{
				if((x*x)+(y*y)==(z*z))
				printf("%d*%d+%d*%d=%d*%d\n",x,x,y,y,z,z);
			}
		}
	}
	return 0;
}
