#include<stdio.h>
int main(){
	int arr[50];
	int n,i,counteven=0,countodd=0;
	printf("Enter Range:");
	scanf("%d",&n);
	printf("Enter Elements");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		if(arr[i]%2==0)
		counteven++;
		else
		countodd++;
	}
	printf("Even number freqency:%d\n",counteven);
	printf("Odd number frequency:%d",countodd);
	return 0;	
}
