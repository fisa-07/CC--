#include<stdio.h>
int chcount(char *s){
	int i=0,count=0;
	while(s[i]!='\0'){
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
			count++;
		}
		i++;
	}
	return count;
}
int main(){
	char str[50];
	printf("Enter String:");
	scanf("%s",str);
	printf("No of Vowels:%d",chcount(str));
}
