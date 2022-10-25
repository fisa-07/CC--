#include<stdio.h>
#include<string.h>
char *sortstr(char *str){
	int i,j;
	char tem;
	for(i=0;(*str[i])!='\0';i++){
		for(j=i+1;(*str[i]!='\0';j++)){
			if((int)*str[i]>(int)*str[j]){
				tem=*str[i];
				*str[i]=*str[j];
				*str[j]=tem;
			}
		}
	}
	return str;
}

int main(){
	char str[20];
	printf("Enter string:");
	gets(str);
	sortstr(str);
	printf("After sorting");
	puts(str);
	return 0;
}
