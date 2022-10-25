#include<stdio.h>
int main()
{
	int i,j,c=0;
	char a[50];
	printf(" Enter the word :");
	scanf("%s",a);
	while(a[j]!='\0') // to calculate the no. of characters
	{
		j++;
	}
	
	for(i=0;i<j;i++)
	{
		if(a[i]>='a'&&a[i]<='z')
		{
			c++;
		}
	}
	printf("\n c=%d j=%d",c,j);
	if(c==j)
	printf("\n All are in lower case.");
	else
	printf("\n All characters is not in lower case");
    return 0;
}
