#include<stdio.h>
#include<math.h>
int main()
{
	int n,alt,sum=0;
	printf("Enter Number: ");
	scanf("%d",&n);
	alt=n;
	for(n=n;n>0;n=n/10)
    sum=sum+pow(n%10,3);
	if(sum==alt)
	printf("Given no is Armstromg");
	else
	printf("Not Armstrong");
	return 0;
}
