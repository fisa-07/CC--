#include<stdio.h>
int main()
{
	int n,a[100],bit=0,rem=0,i,j,k=1;
	printf(" Enter the last number : "); scanf("%d",&n); int t=n;
	for(i=0;i<=n;i++)
	{
		j=i;
		while(n!=0)
		{
			rem=i%2;
			bit=bit+rem*k; 
			k=k*10;
			n=n/2;
			a[i]=bit;
		}
		rem=0; bit=0; n=t; i=j;
	}
	for(i=0;i<=n;i++)
	{
		printf(" %d : %d ",i,a[i]);
		printf("\n");
	}
	return 0;
}
