#include<stdio.h>
int swap(int *n11,int *n22){
	int tem;
	tem=*n11;
	*n11=*n22;
	*n22=tem;
	return *n11,*n22;
}
int main(){
	int n1,n2;
	int *n11,*n22;
	printf("Enter Numbers:");
	scanf("%d %d",&n1,&n2);
	n11=&n1;
	n22=&n2;
	swap(n11,n22);
	printf("%d %d",n1,n2);
	return 0;
}
