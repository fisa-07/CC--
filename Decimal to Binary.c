#include<stdio.h>
int main(){
	int rem[50];
	int n,i=0;
	printf("Enter Number:");
	scanf("%d",&n);
	printf("Binary Number:");
	for(n=n;n>0;n=n/2){
		rem[i]=n%2;
		i++;
	}
	for(i=i;i>=0;i--){
		printf("%d",rem[i]);
	}
	return 0;
}
