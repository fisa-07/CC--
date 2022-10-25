#include<stdio.h>
int main()
{
	int i,n;
	float s1=0,s2=0;
	printf(" Enter range = "); scanf("%d",&n);
	s1=1+1.0/2;
	for(i=2;i<=n-1;i++)
	{
		s2=s2+1.0/(i*i);
	}
	s1=s1+s2;
	printf("\n Answer = %0.2f",s1);
	return 0;
}
