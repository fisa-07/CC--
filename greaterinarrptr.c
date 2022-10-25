#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,*ptr,i,g;
	printf("Size of Array:");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	if(ptr==NULL){
		exit(1);
	}
	printf("Enter Elements:");
	for(i=0;i<n;i++){
		scanf("%d",ptr[i]);
	}
	g=ptr[0];
	for(i=1;i<n;i++){
		if(g>ptr[i]){
			g=ptr[i];
		}
	}
	printf("Greater Element in Array:%d",g);
	return 0;
}
