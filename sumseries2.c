//1+1/2+1/4+1/9......(find sum upto n)


#include<stdio.h>
float sumseries(int n){
	int i;
	float sum=1/2.0;
	for(i=1;i<=n;i++){
		sum=sum+1.0*(1/(i*i));
	}
	return sum;
}
int main(){
	int n;
	printf("Enter Range:");
	scanf("%d",&n);
	printf("%.2f",sumseries(n));
	return 0;
}
