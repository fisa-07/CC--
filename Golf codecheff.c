#include <stdio.h>
int main(void) {
	int n,i,z,b=0,count=0;
	scanf("%d",&n);
	int arr1[n],arr2[n],arr3[n];
	for(i=0;i<n;i++)
	{
	    scanf("%d %d %d",&arr1[i],&arr2[i],&arr3[i]);
	}
	for(i=0;i<n;i++)
	{
	    for(z=1;z<arr1[i];z++)
	    {
	        b=b+arr3[i];
	        if(b==arr2[i])
	        {
	            count++;
	        }
	    }
	    if(count>0)
	    printf("Yes\n");
	    else
	    printf("No\n");
	    count=0;
	}
    return 0;
}

