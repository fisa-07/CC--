#include <stdio.h>

int main(void) {
    int i,t,z=0;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
	    int n;
	    scanf("%d",&n);
	    int a,fact=1;
	    for(a=1;a<=n;a++)
	    {
	        fact=fact*a;
	    }
	    if(n>0)
	    printf("\n%d",fact);
	    else
	    printf("\n%d",z);
	}
	return 0;
}

