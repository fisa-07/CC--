#include<stdio.h>
long int factorial(int n){
	if(n==0||n==1){
		return 1;
	}
	else
	return n*factorial(n-1);
}
int main(){
	int n;
	printf("Enter Number:");
	scanf("%d",&n);
	printf("Factorial of %d is %ld",n,factorial(n));
	return 0;
}
