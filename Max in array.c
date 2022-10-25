#include<stdio.h>
int main()
{
	int i,n,max,maxPos;
	printf("Enter the no. elements :");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter the numbers of array :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	maxPos=0;
		
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			maxPos=i;
		}
	}
	printf("\n Max no is %d and its position is %d",max,maxPos);
	return 0;
}
