#include<stdio.h>
#include<string.h>
int charsearch(char str[], char c){
    int i=0,count=0;
    while(str[i]!='\0'){
        if(str[i]==c)
        count++;
        i++;
    }
    return count;

}
int main(){
    char str[20];
	char c;
    printf("Enter str:");
    gets(str);
    printf("Enter character:");
    scanf("%c",&c);
    printf("No of occurence:%d",charsearch(str,c));
    return 0;
}