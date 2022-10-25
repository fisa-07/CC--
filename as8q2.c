#include<stdio.h>
int greter(int *n11,int *n22){
	int tem;
	if(*n11>*n22)
	tem=*n11;
	else
	tem=*n22;
	return tem;
}
int main(){
	int n1,n2;
	int *n11,*n22;
	printf("Enter Two Integers:");
	scanf("%d %d",&n1,&n2);
	n11=&n1;
	n22=&n2;
	printf("%d",greter(n11,n22));
	return 0;
}
