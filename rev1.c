#include<stdio.h>
int main(){
	char a[50];
	int n,i;
	printf(" Enter the string : ");
	scanf("%s",a);
	while(a[n]!='\0') // to calculate the no. of characters
	{
		n++;
	}
    printf("Before reverse:%s\n",a);
    printf("After reverse:");
    for(i=n-1;i>=0;i--){
       printf("%c",a[i]); 	
	}
    return 0;
}
