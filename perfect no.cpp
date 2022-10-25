#include<stdio.h>
int main(){
	int range,sum=0,i,j;
	printf("Enter Range:");
	scanf("%d",&range);
	for(i=1;i<=range;i++){
		for(j=1;j<i;j++){
			if(i%j==0){
				sum=sum+j;
			}
		}
		if(sum==i){
			printf("%d is Perfect Number\n",sum);
		}
		sum=0;
	}
	return 0;
	
}
