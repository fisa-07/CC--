#include<stdio.h>
int count=1;
int pers(int a){
	int mult=1;
	for(a=a;a>0;a=a/10){
		mult=mult*(a%10); 
	}
	if(mult>9){
		count++;
		pers(mult);
	}
	return count;
}
int main(){
	int n;
	printf("Enter Number:");
	scanf("%d",&n);
	printf("%d",pers(n));
	return 0;
}
