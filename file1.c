#include<stdio.h>
#include<stdlib.h>
int main(){
    int ch;
    FILE *fp;
    char s;
    int r;
    if((fp=fopen("file1.txt","w"))==NULL){
        printf("Error");
        exit(1);
    }
    else{
        printf("Enter Text:");
        ch=scanf("%c",&s);
        fputc(ch,fp);
        printf("Enter no:");
        scanf("%d",&r);
        putw(r,fp);
        fclose(fp);
    }
    return 0;
}