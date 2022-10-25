#include<stdio.h>
int chcount(char *s){
	int i=0;
	while(s[i]!='\0'){
		i++;
	}
	return i;
}
int main(){
	char str[50];
	printf("Enter String:");
	scanf("%s",str);
	printf("No of characters:%d",chcount(str));
}
