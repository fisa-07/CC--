#include<stdio.h>
int sumdiv(int n){
	int i,sum=0;
	for(i=1;i<n;i++){
		if(n%i==0){
			sum=sum+i;
		}
	}
	return sum;
}
int main(){
	int n;
	printf("Enter Number:");
	scanf("%d",&n);
	printf("%d\n",sumdiv(n));
	if(sumdiv(n)==n)
	printf("Number is perfect");
	return 0;
}
