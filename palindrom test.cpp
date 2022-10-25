#include<stdio.h>
int main()
{
	int n,rem,sum=0,p;
	printf("Enter number:");
	scanf("%d",&n);
	p=n;                  //method to reverse a number//
	for(n=n;n>0;n=n/10)    
	{                     
		rem=n%10;         
		sum=sum*10+rem; 
	}                     //
	if(sum==p)
	{
		printf("Number is palindrom");
	}
	else
	{
		printf("Number is not palindrom");
	}
	return 0;
}
