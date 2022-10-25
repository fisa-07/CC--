#include<stdio.h>
int main(){
	char str[20];
	int p,i;
	printf("Enter String:");
	gets(str);
	printf("Enter position:");
	scanf("%d",&p);
	if(p!=0){
    	for(i=p-1;i<=p-1+p-1;i++){
    		printf("%c",str[i]);
    	}
    }
    else{
    	puts(str);
	}
	return 0;
	
}
