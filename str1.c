#include<stdio.h>
#include<stdlib.h>
int main(){
	char str1[20],str2[20];
	int i=0,len1=0,count=0;
	gets(str1);
	gets(str2);
	while(str1[i]!='\0'){
		len1++;
		i++;
	}
	for(i=0;str1[i]!='\0';i++){
		if(str1[i]==str2[i])
		count++;
		else if((int)str1[i]-(int)str2[i]==32||(int)str1[i]-(int)str2[i]==-32){
			count++;
		}
	}
	if(count==len1)
	printf("Strings are same");
	else
	printf("Strings are different");
	return 0;
}