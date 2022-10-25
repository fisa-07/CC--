#include<stdio.h>
float sumseries(int n){
	float sum=0;
	int i;
	if(n==2)
	sum=1.0+1/2.0;
	if(n==1)
	sum=1.0;
	if(n>2){
		for(i=3;i<=n;i++){
		sum=sum+1/(i-1)*(i-1);
	}
	sum=sum+1+1/2.0;
	}
	return sum;
}
int main(){
	int n;
	printf("Enter range:");
	scanf("%d",&n);
	printf("%f",sumseries(n));
	return 0;
}
