#include<stdio.h>
int binary(int n){
	int rem[50],i=0,count=0;
	for(n=n;n>0;n=n/2){
		rem[i]=n%2;
		i++;
	}
	for(i=i;i>=0;i--){
		if(rem[i]==1)
		count++;
	}
	return  count;
}
int main(){
	int n,i,sum=0;
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		sum=sum+binary(i);	
	}
	printf("%d",sum);
	return 0;
}
