#include<stdio.h>
int main()
{
	int arrl[50],arrb[50],arrh[50],i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&arrl[i],&arrb[i],&arrh[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arrh[i]<41)
		{
			printf("%d\n",arrl[i]*arrb[i]*arrh[i]);
		}
	}
	return 0;
}
