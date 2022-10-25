#include<stdio.h>
void prime(int a,int b){
	int i,j,count=0; 
	for(i=a;i<=b;i++){
		for(j=1;j<=b;j++){
			if(i%j==0){
				count++;
			}
		}
		if(count==2){
			printf("%d\n",i);
		}
		j=1;
		count=0;
	}
	
}
int sum(int n){
	int i,sum=0;
	for(i=n;i>0;i=i/10){
		sum=sum+i%10;
	}
	return sum;
}
