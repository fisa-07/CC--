#include<stdio.h>
#include<math.h>
int cubesum(int a){
	int rem,i,sum=0;
	for(a=a;a>0;a=a/10){
		sum=sum+pow(a%10,3);
	}
	return sum;
}
int main(){
	int n;
	printf("Enter Number:");
	scanf("%d",&n);
	if(n==cubesum(n))
	printf("Number is armstrong");
	else
	printf("Number is not an armstrong");
	return 0;
}
