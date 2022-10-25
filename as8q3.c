#include<stdio.h>
void oddeven(int *arr,int n){
	int i,counte=0,counto=0;
	for(i=0;i<n;i++){
		if(arr[i]%2==0){
			counte++;
		}
		else{
			counto++;
		}
	}
	printf("No of even and odd:%d %d",counte,counto);
}
int main(){
	int arr[50];
	int n,i;
	printf("Enter size of array:");
	scanf("%d",&n);
	printf("Enter elements:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	oddeven(arr,n);
	return 0;
}
