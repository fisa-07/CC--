#include<stdio.h>
#include<stdlib.h>
int main(){
    char str[20];
    int len,i=0,count1=0,count2=0;
    gets(str);
    len=strlen(str);
    while(str[i]!='\0'){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            count1++;
            
        }
        if(str[i]==' ')
        count2++;
        i++;
    }
    printf("No of consonants:%d\n",len-count1-count2);
    printf("No of space:%d",count2);
    return 0;
}