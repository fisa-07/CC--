#include<stdio.h>
#include<string.h>
void palindrome(char *str1,int len){
	int i,j=0,count=0;
	char str2[50];
	for(i=len-1;i>=0;i--){
		str2[j]=str1[i];
		j++;
	}
	for(i=0;i<=len-1;i++){
		if(str2[i]==str1[i]){
			count++;
		}
	}
	if(count==len)
	printf("String is Plaindrome");
	else
	printf("Not palindrome");
}
int main(){
	char str1[50];
	int len=0;
	printf("Enter string:");
	scanf("%s",str1);
	while(str1[len]!='\0'){
		len++;
	}
	printf("%d\n",len);
	palindrome(str1,len);
	
	return 0;
}
