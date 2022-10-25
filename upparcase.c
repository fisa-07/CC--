#include<stdio.h>
void upparcase(int n){
	printf("%c",n-32);
}
int main(){
	char c;
	int n;
	printf("Enter Character:");
	scanf("%c",&c);
	n=c;
	upparcase(n);
	return 0;
}
