#include<stdio.h>
int gcd(int m,int n){
	if(m%n==0)
	return n;
	else
	return gcd(n,m%n);
}
int main(){
	int m,n;
	printf("Enter Two Number:");
	scanf("%d%d",&n,&m);
	printf("%d",gcd(m,n));
	return 0;
}
