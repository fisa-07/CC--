#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {

    char str[10000];
    char stre[5000],stro[5000];
    int len,t,i;
    int e=0,o=0;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%s", str);
        len=strlen(str);
        for(i=0;str[len]!='\0';i++){
             if(i==0||i%2==0){
                stre[e]=str[i];
                e++;
            }
            else{
                stro[o]=str[i];
                o++;
            }
        }
        printf("%s %s",stre,stro);
    }
    return 0;
}
