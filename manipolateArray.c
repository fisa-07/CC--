#include<stdio.h>
int main(){
	int i,t,n,tem,j;
	scanf("%d %d",&t,&n);
	int arr[t];
	for(i=0;i<t;i++){
		scanf("%d",&arr[i]);
	}
	while(n--){
		i=0;
		for(j=1;j<t;j++){
			tem=arr[i];
			arr[i]=arr[j];
			arr[j]=tem;
			i++;	
		}  
	}
	for(i=0;i<t;i++){
		printf("%d\t",arr[i]);
	}
	return 0;
}
