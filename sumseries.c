#include<stdio.h>
#include<math.h>
float sumser(int n){
	float sum=0,i;
	for(i=2;i<=n-2;i++){
		sum=sum+1/pow(i,2);
	}
	sum=sum+1+1/2.0;
	return sum;
}
int main(){
	int n;
	printf("Enter Number:");
	scanf("%d",&n);
	printf("%f",sumser(n));
	return 0;
}
