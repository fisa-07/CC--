#include<stdio.h>
int main()
{
	int n=0,n1,i,c1=0;
	char a[50],b[50],c[50];
	printf(" Enter the string : "); scanf("%s",a);
	while(a[n]!='\0') // to calculate the no. of characters
	{
		n++;
	}
	printf("\n n = %d",n);
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
	}
	printf("\n Copied String = %s ",b);
	
	for(i=0;i<n;i++)
	{
		c[n-1-i]=a[i];
	}
	printf("\n String Reversed : %s",c);
	for(i=0;i<n;i++)
	{
		if(a[i]==c[i])
		c1++;
	}
	if(c1==n)
	printf("\n String is Palindrome");
	else
	printf("\n String is not palindrome");
	return 0;
}
