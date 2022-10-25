#include<stdio.h>
#include<string.h>
void func(char str[],char c1,char c2){
    int flag=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==c1){
            flag++;
        }
    }
    if(flag>0){
        for(int i=0;str[i]!='\0';i++){
            if(str[i]==c1){
                str[i]=c2;
            }
        }
        printf("After replacement:\n");
        for(int i=0;str[i]!=0;i++){
            printf("%c",str[i]);
        }
    }
    else{
        printf("Character %c is not found",c1);
    }
}
int main(){
    char str[20],c1,c2;
    printf("Enter string:");
    gets(str);
    printf("Enter character you want to replace:");
    scanf("%c",&c1);
    fflush(stdin);//helps to not jump this scanf 
    printf("Enter character that you want to insert:");
    scanf("%c",&c2);
    func(str,c1,c2);
    return 0;
}